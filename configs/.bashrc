# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
[ -z "$PS1" ] && return

# don't put duplicate lines or lines starting with space in the history.
# See bash(1) for more options
HISTCONTROL=ignoreboth

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# If set, the pattern "**" used in a pathname expansion context will
# match all files and zero or more directories and subdirectories.
#shopt -s globstar

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "$debian_chroot" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
#force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
        # We have color support; assume it's compliant with Ecma-48
        # (ISO/IEC-6429). (Lack of such support is extremely rare, and such
        # a case would tend to support setf rather than setaf.)
        color_prompt=yes
    else
        color_prompt=
    fi
fi

if [ "$color_prompt" = yes ]; then
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    ;;
*)
    ;;
esac

# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# some more ls aliases
alias ll='ls -alF'
alias la='ls -A'
alias l='ls -CF'

# Add an "alert" alias for long running commands.  Use like so:
#   sleep 10; alert
alias alert='notify-send --urgency=low -i "$([ $? = 0 ] && echo terminal || echo error)" "$(history|tail -n1|sed -e '\''s/^\s*[0-9]\+\s*//;s/[;&|]\s*alert$//'\'')"'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if [ -f /etc/bash_completion ] && ! shopt -oq posix; then
    . /etc/bash_completion
fi

# Hostname
h=`hostname`

# Command to read input & mask it
cmd='read -sp "Enter password: " pass'

# Path to aide integrity tool
a="/usr/bin/aide"
# Path to aide policy database
adb="/var/lib/aide"

# Path to tripwire integrity tool
t="/usr/sbin/tripwire"
# Path to tripwire policy database
tdb="/var/lib/tripwire/"

# Path to GnuGPG
g="/usr/bin/gpg"

# Path to stored encrypted policy files
pt="/boot/.tools/audit/tripwire"
pa="/boot/.tools/audit/aide"

# Aide update policy baseline (decrypt, update database, encrypt & remove old)
alias aide-update="$g --symmetric --cipher-algo aes256 -o $adb/aide.db.gz $pa/aide.db.new.gz.gpg && $a --update && $g --symmetric --cipher-algo aes256 -o $pa/aide.db.new.gz.gpg $adb/aide.db.new.gz && rm $adb/aide.db.*"

# Aide check policy (decrypt, check database & remove)
alias aide-check="$g --symmetric --cipher-algo aes256 -o $adb/aide.db.new.gz $pa/aide.db.new.gz.gpg && $a --init && $a --check && rm /var/lib/aide/aide.db.new.gz"

# Initial setup of encrypted db & config for tripwire
alias tripwire-save="$cmd; echo ${pass}|$g --yes --batch --passphrase-fd 0 --symmetric --cipher-algo aes256 -o $pt/$h.twd.gpg $tdb/$h.twd"

# Tripwire update policy baseline (disable high security mode, update policy, encrypt & remove old)
alias tripwire-update="$cmd; echo ${pass}|$g --yes --no-tty --batch --passphrase-fd 0 --decrypt -o $tdb/$h.twd $pt/$h.twd.gpg; sudo $t -m p --secure-mode low /etc/tripwire/twpol.txt; echo ${pass}|$g --yes --no-tty --batch --passphrase-fd 0 --symmetric --cipher-algo aes256 -o $pt/$h.twd.gpg $tdb/$h.twd; rm -fv $tdb/*.twd*"

# Tripwire check policy (decrypt, check database & remove)
alias tripwire-check="$cmd; echo ${pass}|$g --yes --no-tty --batch --passphrase-fd 0 --decrypt -o $tdb/$h.twd $pt/$h.twd.gpg; sudo $t --check; rm -fv $tdb/*.twd*"

# Tripwire review report
alias tripwire-report="twprint -m r --twrfile $1"

alias firefox="sudo -u sandbox -H firefox -D sandbox &"

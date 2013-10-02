#tools

A series of configuration files, scripts etc to help me
manage complex systems.

##configs
Here be configuration files for tuning network options,
providing host based firewalling, custom aliases for
complex commands & environment variables

##desktop-tools
Contains latest Intel Pro 1000e network driver for
Linux & a customized shell script to provide the following
functionality:

1. Compile & load latest Intel driver if it doesn't exist
2. Setup network configuration, gateway & DNS options
3. Install lvm2 & mdadm packages if they don't exist
4. Prompt for passphrase
5. Decrypt all luks devices
6. Setup or create all LVM's on decrypted devices
7. Mount all partitions
8. Mount /proc, bind /dev & /sys partitions
9. Chroot into environment for repairs etc.
10. On exit, unmount & relock all encypted partitions

##laptop-tools
Similar tool set as the desktop tools. Provides the
following functionality:

1. Prompt for passphrase
2. Decrypt all luks devices
3. Setup or create all LVM's on decrypted devices
4. Mount all partitions
5. Mount /proc, bind /dev & /sys partitions
6. Chroot into environment for repairs etc.
7. On exit, unmount & relock all encypted partitions

##vm-tools
A simple shell script to help with creation & use
of qemu based virtual machines.

###Create new VM
Here is how you can create a new VM. Requires a
valid ISO file within the ISO folder.

```shell
%> ./launcher install <name-of-vm> <path/to/iso>
```

###Launch existing VM
Here is how you can launch an existing VM.

```shell
%> ./launcher
1) vm/docker.iso
2) vm/lamp.iso
3) vm/node.iso
Select VM to load or 'q' to quit:
```

Pick a number and then VNC & SSH connections are available
on TCP port 2222 or 127.0.0.1:1 respectively.

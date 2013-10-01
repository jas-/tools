#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf6628fc9, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6c1a6c6, "netdev_info" },
	{ 0x53822150, "kmalloc_caches" },
	{ 0xa8b3dc5f, "pci_bus_read_config_byte" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4dc87, "timecounter_init" },
	{ 0xfb8340ab, "__pm_runtime_idle" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x25ec1b28, "strlen" },
	{ 0xcc8c6254, "skb_pad" },
	{ 0xdb97fba0, "dev_set_drvdata" },
	{ 0xfa944b3c, "dma_set_mask" },
	{ 0x9d71339a, "node_data" },
	{ 0x4526faf8, "napi_complete" },
	{ 0xe4bde001, "pci_disable_device" },
	{ 0x81499317, "pci_disable_msix" },
	{ 0x546fa66c, "netif_carrier_on" },
	{ 0x87ee4e3, "pm_qos_add_request" },
	{ 0x60e2722e, "pm_qos_remove_request" },
	{ 0xf89843f9, "schedule_work" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x327207e3, "netif_carrier_off" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0xcf545fdf, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x59f300eb, "mutex_unlock" },
	{ 0xe3d81512, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0x5e037c33, "pci_bus_write_config_word" },
	{ 0x2447533c, "ktime_get_real" },
	{ 0x656c3df, "pci_disable_link_state_locked" },
	{ 0x6a11d9ad, "__alloc_pages_nodemask" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x467979d9, "skb_trim" },
	{ 0x58a1e82e, "__netdev_alloc_skb" },
	{ 0x27c33efe, "csum_ipv6_magic" },
	{ 0xe676ea2e, "__pskb_pull_tail" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x707ffd49, "pci_set_master" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xde0bdcff, "memset" },
	{ 0xc050e2f6, "pci_enable_pcie_error_reporting" },
	{ 0xc1a498ca, "pci_enable_msix" },
	{ 0x3b897d2f, "pci_restore_state" },
	{ 0xde1c9b0e, "dev_err" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xaa73d7e2, "ethtool_op_get_link" },
	{ 0xdd0b6a21, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x343f725f, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x672144bd, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8d70e71c, "__pci_enable_wake" },
	{ 0x868e2bb, "mutex_lock" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0xe45a9849, "dev_close" },
	{ 0x8834396c, "mod_timer" },
	{ 0xc0f5c60f, "netif_napi_add" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xa65c71a0, "device_wakeup_enable" },
	{ 0xffc49657, "dev_kfree_skb_any" },
	{ 0x3bb6d4bf, "pci_clear_master" },
	{ 0x2a2885e4, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x20af10f7, "pci_find_capability" },
	{ 0x2e4fc9ba, "dev_notice" },
	{ 0x6b89a6ac, "dev_kfree_skb_irq" },
	{ 0xead58fb9, "print_hex_dump" },
	{ 0x5892ef56, "pci_select_bars" },
	{ 0xc0bf6ead, "timecounter_cyc2time" },
	{ 0xb2068ac2, "netif_device_attach" },
	{ 0x1b026018, "napi_gro_receive" },
	{ 0x8b99deaf, "_dev_info" },
	{ 0x96eeaaf0, "kmem_cache_alloc_node_trace" },
	{ 0x618911fc, "numa_node" },
	{ 0x2e0310d0, "netif_device_detach" },
	{ 0x77782dca, "__alloc_skb" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8d5b9bdc, "pci_bus_read_config_word" },
	{ 0x6f10decd, "__napi_schedule" },
	{ 0x5796b9c2, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe56c6591, "pm_schedule_suspend" },
	{ 0x141a7b07, "eth_type_trans" },
	{ 0x5e85b764, "pskb_expand_head" },
	{ 0xdb7e8d51, "netdev_err" },
	{ 0x59d7329d, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd94743ef, "node_states" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfd9f00df, "netdev_warn" },
	{ 0x26e9e802, "eth_validate_addr" },
	{ 0x9fcf4dc5, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x2f795daa, "___pskb_trim" },
	{ 0xf59f197, "param_array_ops" },
	{ 0x285ccc67, "pci_disable_msi" },
	{ 0x5c1a5b0c, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0xf9de0d80, "pci_prepare_to_sleep" },
	{ 0x410298c2, "pci_dev_run_wake" },
	{ 0x2026c9ca, "__pci_register_driver" },
	{ 0x5013e6de, "pm_qos_update_request" },
	{ 0x98d789dc, "put_page" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x9423d079, "dev_warn" },
	{ 0x28166ed8, "unregister_netdev" },
	{ 0xe8116e08, "__kmalloc_node" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x50720c5f, "snprintf" },
	{ 0x7aae7c6d, "pci_enable_msi_block" },
	{ 0xe7683d3, "__netif_schedule" },
	{ 0x2d82e646, "consume_skb" },
	{ 0x376a7c5e, "pci_enable_device_mem" },
	{ 0x3b2af9b7, "skb_tstamp_tx" },
	{ 0x5caf4af1, "skb_put" },
	{ 0x9219e761, "pci_release_selected_regions" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0xb2798ef9, "dev_get_drvdata" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x17cfeb21, "dma_ops" },
	{ 0x79480be, "pci_request_selected_regions_exclusive" },
	{ 0x8c38ceea, "device_set_wakeup_enable" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x66795b2b, "pci_save_state" },
	{ 0x8dffc625, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E08BFA31FFBE6A8F2869CB9");

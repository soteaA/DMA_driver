#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x951ca67e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8e8c60c3, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5770e4c, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x151a40d1, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a773db5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x8362bcb1, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xee57ea5d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x863f6f44, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x6e10166c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x17506ac5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xaaa1ccbf, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xdd6a611a, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x3a2ac1c1, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x8435e048, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xad67ce6d, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x2f5c1a6, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x87b3bbcb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5c3a90d5, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9467d431, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x1490ff4, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


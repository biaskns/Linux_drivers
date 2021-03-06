#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7305f8c7, "module_layout" },
	{ 0x427acfe4, "cdev_del" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x23b852f2, "gpiod_to_irq" },
	{ 0x511f2cfb, "cdev_add" },
	{ 0x76cff1fa, "cdev_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc1a4d86d, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x413c0466, "__wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x963e0acd, "finish_wait" },
	{ 0x93f6bff1, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x93977d7e, "gpiod_set_raw_value" },
	{ 0x7b8ab45, "gpiod_get_raw_value" },
	{ 0x28c093b3, "gpio_to_desc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F41E1727D77B8D61A0A72E9");

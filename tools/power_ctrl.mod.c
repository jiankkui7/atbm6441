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
	{ 0xbef25bd8, "module_layout" },
	{ 0x8adef291, "cdev_alloc" },
	{ 0xef94b58d, "cdev_del" },
	{ 0xd952de99, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x41bdf8ba, "device_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x27e1a049, "printk" },
	{ 0xfc575044, "device_create" },
	{ 0x2d90cf2c, "cdev_add" },
	{ 0x69ef5e17, "sw_gpio_irq_free" },
	{ 0xd6b80f4f, "sw_gpio_irq_request" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x72542c85, "__wake_up" },
	{ 0xfe990052, "gpio_free" },
	{ 0x39645b1d, "wifi_pm_power" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x275d76fd, "class_destroy" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x76f387ec, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x8699da5b, "sw_gpio_setcfg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A070BE7104C8612181384A9");

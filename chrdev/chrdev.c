#include <linux/init.h>
#include <linux/module.h>
#include <linux/device.h>
#include <linux/err.h>

static int chrdev_init(void)
{
	pr_info("chrdev: module loaded\n");
	return 0;
}

static void chrdev_exit(void)
{
	pr_info("chrdev: module exited\n");
}

module_init(chrdev_init);
module_exit(chrdev_exit);

MODULE_AUTHOR("Andriy.Khulap <andriy.khulap@globallogic.com>");
MODULE_DESCRIPTION("Character device example driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

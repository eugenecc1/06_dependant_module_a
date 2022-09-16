#include<linux/module.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");

extern void add_two_numbers_task_a(int, int);

static int my_init(void)
{
	printk("Module 1 Loaded\n");
	add_two_numbers_task_a(5, 6);
	return 0;
}

static void my_exit(void)
{
	printk("Module 1 Removed\n");

}

module_init(my_init);
module_exit(my_exit);

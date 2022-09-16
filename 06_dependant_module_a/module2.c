#include<linux/module.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");

void add_two_numbers_task_a(int a, int b)
{
	printk("Sum of %d and %d is %d\n", a, b, a + b);
}
EXPORT_SYMBOL(add_two_numbers_task_a);

static int my_init(void)
{
	printk("Module 2 Loaded. It defines the add_two_numbers_task_a function.\n");
	return 0;
}

static void my_exit(void)
{
	printk("Module 2 Removed");

}

module_init(my_init);
module_exit(my_exit);

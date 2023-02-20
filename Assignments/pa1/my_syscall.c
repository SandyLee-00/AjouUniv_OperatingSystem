#include <linux/linkage.h>
#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(print_number,int,num)
{
	printk("Hello, kernel! num = %d\n",num);
}

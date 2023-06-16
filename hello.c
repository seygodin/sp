/* 
* hello.c - The simplest kernel module.
*/
#include <linux/module.h> /* Needed by all modules */

#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/module.h> 
MODULE_LICENSE(“GPL”); 
int init_module(void)
{
 printk(KERN_INFO "CSE306: Hello world.\n");
 return 0;
}
void cleanup_module(void)
{
 printk(KERN_INFO "CSE306A: Goodbye world.\n");
}

#include <linux/init.h>
#include <linux/module.h>

static int my_init(void){
    printk(KERN_ALERT "hello in kernel space\n");
    return 0;
}

static void my_exit(void){
    printk(KERN_ALERT "exiting ...\n");
}

module_init(my_init);
module_exit(my_exit);


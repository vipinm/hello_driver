#include <linux/init.h>
#include <linux/module.h>


static int my_init(){
    printk("hello in kernel space\n");
    return 0;
}

static void my_exit(){
    printk("exiting ...\n");
}

module_init(my_init);
module_exit(my_exit);


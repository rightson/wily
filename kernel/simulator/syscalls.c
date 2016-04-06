#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/syscalls.h>
#include <linux/linkage.h>

asmlinkage long sys_simulator(int action, int value) {
    printk(KERN_EMERG "[simulator syscall] action: %d, value: %d\n", action, value);
    return 0;
}


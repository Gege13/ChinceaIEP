#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");


void adunare(int a,int b) {
    
    printk ("%d", a+b);
}

void scadere (int a,int b){

    printk ("%d", a-b);

}

void prim(void) {
    int n, i, flag = 0;
    printk("Enter a positive integer: ");
    n=20;

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printk(" 1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printk("%d is a prime number.", n);
        else
            printk("%d is not a prime number.", n);
    }

}


void doId(void) {
   adunare(2,3);
   scadere(4,3);

}

static int dummy_init(void)
{
        printk("Hi\n");
        doId();
        return 0;
}

static void dummy_exit(void)
{
        printk("Bye\n");
        prim();
}

module_init(dummy_init);
module_exit(dummy_exit);






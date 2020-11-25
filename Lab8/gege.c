#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");


void adunare(int a,int b) {
    
    pr_debug (a+b);
}

void scadere (int a,int b){

    pr_debug (a-b);

}

void prim() {
    int n, i, flag = 0;
    pr_debug("Enter a positive integer: ");
    n=20;

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        pr_debug("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            pr_debug("%d is a prime number.", n);
        else
            pr_debug("%d is not a prime number.", n);
    }

}


void doId() {
   adunare(2,3);
   scadere(4,3);

}

static int dummy_init(void)
{
        pr_debug("Hi\n");
        doId();
        return 0;
}

static void dummy_exit(void)
{
        pr_debug("Bye\n");
        prim();
}

module_init(dummy_init);
module_exit(dummy_exit);






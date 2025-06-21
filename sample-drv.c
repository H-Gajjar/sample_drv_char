#include<linux/kernel.h>
#include<linux/module.h>




int __init module_sample_init(void) 
{
	return 0;
}

void __exit module_sample_exit(void)
{

}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hardik Gajjar <ghardik78@yahoo.com>");

#include <stdio.h>

void exec_before_main(void) __attribute__((constructor));

/**
 * exec_before_main - this prints sentences before the main function is called
 */
void exec_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

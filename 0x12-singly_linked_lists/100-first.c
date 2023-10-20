#include <stdio.h>

void My_func(void) __attribute__ ((constructor));

/**
 * My_func -A function that prints a sentence before the main
 * function is executed
 */
void My_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include "main.h"
#include <stdio.h>

/**
 * print_binary -A function that prints binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int switchs;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, switchs = 0; (tmp >>= 1) > 0; switchs++)
		;

	for (; switchs >= 0; switchs--)
	{
		if ((n >> switchs) & 1)
			printf("1");
		else
			printf("0");
	}
}

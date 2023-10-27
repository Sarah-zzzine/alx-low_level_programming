#include "main.h"
#include <stdio.h>
/**
 * get_bit -A functiom that gets the value of a bit at a given index
 * @n: Number
 * @index: index starting from 0 of the bit we look for
 * Return: Value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int grap;

	if (index > 64)
		return (-1);

	grap = n >> index;

	return (grap & 1);
}

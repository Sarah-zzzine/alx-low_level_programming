#include "main.h"
#include <stdio.h>
/**
 * clear_bit -A function that set the value of a bit to 0 at a given index
 * @n: the ointer to chnge
 * @index: index position to change
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int grap;

	if (index > 64)
		return (-1);
	grap = index;
	for (j = 1; grap > 0; j *= 2, grap--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}

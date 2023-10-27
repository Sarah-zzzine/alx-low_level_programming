#include "main.h"
#include <stdio.h>

/**
 * flip_bits -A function thta flips bits to convert
 * one number to another number
 * @n: 1st number
 * @m: 2ed number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffrence;
	int count;

	diffrence = n ^ m;
	count = 0;

	while (diffrence)
	{
		count++;
		diffrence &= (diffrence - 1);
	}

	return (count);
}

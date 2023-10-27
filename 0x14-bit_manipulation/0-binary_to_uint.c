#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -A function that convert a binary number to an unsigned int
 * @b: string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int complet, exp;
	int lenght;

	if (b == NULL)
		return (0);

	for (lenght = 0; b[lenght]; lenght++)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
	}

	for (exp = 1, complet = 0, lenght--; lenght >= 0; lenght--, exp *= 2)
	{
		if (b[lenght] == '1')
			complet += exp;
	}

	return (complet);
}

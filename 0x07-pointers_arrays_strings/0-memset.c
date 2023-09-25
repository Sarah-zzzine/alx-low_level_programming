#include "main.h"

/**
 * *_memset -A function that fills memory with a constant byte
 * @s: Memory area
 * @b: char to copy
 * @n: number of times to copy the constant b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

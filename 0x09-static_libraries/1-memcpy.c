#include "main.h"

/**
 * _memcpy -A function that copies memory area
 * @src: source
 * @dest: destination
 * @n: Number of bytes that copies
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i = i + 1)
	{
		dest[i] = src[i];
	}
	return (dest);
}

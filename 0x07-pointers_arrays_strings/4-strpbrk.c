#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -a function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; *s != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s = s + 1;
	}
	return (NULL);
}

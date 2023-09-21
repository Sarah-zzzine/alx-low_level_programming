#include "main.h"

/**
 * _strcat -a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src);
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

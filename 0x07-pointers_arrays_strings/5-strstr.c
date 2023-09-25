#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string to look for the occurence in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int j, k;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[j + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[j]);
	}
	return (NULL);
}

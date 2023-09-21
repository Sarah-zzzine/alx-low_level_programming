#include "main.h"

/**
 * leet -a function that encodes a string
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int l, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[l] == s1[k])
			{
				n[l] = s2[k];
			}
		}
	}
	return (n);
}

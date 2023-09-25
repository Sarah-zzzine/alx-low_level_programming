#include "main.h"

/**
 * _strspn -a function that gets the length of a prefix substring
 * @s: string
 * @accept: string containing the list of character to math in s
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, o, p, flag;

	p = 0;

	for (i = 0; s[i] != '\0'; i = i + 1)
	{
		flag = 0;
		for (o = 0; accept[o] != '\0'; o = o + 1)
		{
			if (s[i] == accept[o])
			{
				p = p + 1;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (p);
		}
	}
	return (0);
}

#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string
 * starting with the first character
 * @str: string
 * Return: print
 */

void puts2(char *str)
{
	int longeur = 0;
	int f = 0;
	char *j = str;
	int c;

	while (*j != '\0')
	{
		j++;
		longeur++;
	}
	f = longeur - 1;
	for (c = 0 ; c <= f ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}


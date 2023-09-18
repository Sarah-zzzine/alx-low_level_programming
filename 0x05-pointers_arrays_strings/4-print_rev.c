#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longeur = 0;
	int m;

	while (*s != '\0')
	{
		longeur = longeur + 1;
		s = s + 1;
	}
	s--;
	for (m = longeur; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

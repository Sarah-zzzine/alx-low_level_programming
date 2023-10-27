#include "main.h"

/**
 * get_endianness -A functoin that checks the endianness.
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int Number;

	Number = 1;
	if (*(char *)&Number == 1)
		return (1);
	else
		return (0);
}


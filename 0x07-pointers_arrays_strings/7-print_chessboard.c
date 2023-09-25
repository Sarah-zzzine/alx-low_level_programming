#include "main.h"

/**
 * print_chessboard - A function that prints the chessborad
 * @a: 2 deimension array to print
 */

void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}

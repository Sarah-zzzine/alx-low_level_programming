#include "main.h"

/**
 * swap_int -a function that swaps the values of two integers
 * @a: interger swaps to b
 * @b: interger swaps to a
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

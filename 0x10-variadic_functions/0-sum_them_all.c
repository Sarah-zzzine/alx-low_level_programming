#include "variadic_functions.h"

/**
 * sum_them_all -A function that calculates the sum of all the given parameters
 * @n: The number of arg given to the func
 *
 * Return: The result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int Sum = 0;
	va_list Sum_list;

	va_start(Sum_list, n);

	for (i = 0; i < n; i++)
		Sum = Sum + va_arg(Sum_list, int);

	va_end(Sum_list);

	return (Sum);
}

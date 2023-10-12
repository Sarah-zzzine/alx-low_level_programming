#include "variadic_functions.h"

/**
 * print_numbers -A func that prints numbers given as paramets
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the func
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_numbers;

	va_start(print_numbers, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(print_numbers, int));
		else if (separator && i == 0)
			printf("%d", va_arg(print_numbers, int));
		else
			printf("%s%d", separator, va_arg(print_numbers, int));
	}
	va_end(print_numbers);

	printf("\n");
}

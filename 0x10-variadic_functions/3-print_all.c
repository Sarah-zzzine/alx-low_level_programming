#include "variadic_functions.h"

/**
 * print_all -A func that prints all format
 * @format: list of types of args given to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list print_all;

	va_start(print_all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(print_all, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(print_all, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(print_all, double));
					break;
				case 's':
					str = va_arg(print_all, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(print_all);
}

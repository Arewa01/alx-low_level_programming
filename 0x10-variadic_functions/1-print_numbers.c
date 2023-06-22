#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @n: no of arguments
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", x);
	}
	va_end(args);
	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @n: no of arguments
 * @separator: string to be printed between numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%s", s);
	}
	va_end(args);
	printf("\n");
}

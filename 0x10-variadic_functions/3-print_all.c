#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	char *string;
	char *seperator;
	int i = 0;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", seperator, string);
					break;

				default:
					i++;
					break;
			}
			seperator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}

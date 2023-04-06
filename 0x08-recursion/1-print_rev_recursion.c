#include "main.h"
/**
* _print_rev_recursion - a function that prints strings in reverse
* @s: The string to be printed
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	else
		_putchar('\n');
}
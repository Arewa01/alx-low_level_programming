#include "main.h"
/**
 * _isdigit- a function that checks for a digit 0 - 9
 * @c: character to check
 * Return: returns 1 if c is uppercase, and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	return (0);
}

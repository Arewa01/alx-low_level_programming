#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@a: The integer
 * Return: Absolute value
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}

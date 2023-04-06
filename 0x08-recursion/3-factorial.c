#include <stdio.h>
/**
* factorial - a function that returns the factorial.
* Return: returns -1 for negatives, and 1 for 0.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial (n - 1));
}

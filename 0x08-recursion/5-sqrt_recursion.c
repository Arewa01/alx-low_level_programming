#include "main.h"
/**
* _sqrt_recursion - function that returns natural square root
* @n: number to be evaluated
* @i : the square.
* Return: returns -1 if not natural square, and the actual value if natural.
*/
int _help_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_help_sqrt_recursion(n, i + 1));
}
/**
* _sqrt_recursion - function that returns natural square root.
* Return; returns the actual value if natural
*/ 
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_help_sqrt_recursion(n, 1));
}

#include "main.h"
/**
* _sqrt_recursion - function that returns natural square root
* _help_sqrt_recursion - Function that performs the square root 
* @n: number to be evaluated
* @i : the square.
* Return: returns -1 if not natural square, and the actual value if natural.
*/
int _help_sqrt_recursion(int n, int i)
{
	n = i * i;
	
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return _help_sqrt_recursion(n, i + 1);
} 	
int _sqrt_recursion(int n);
{
	return _help_sqrt_recursion(n, 1);
}	

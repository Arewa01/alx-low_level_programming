#include <stdio.h>
/**
* _pow_recursion - a function that returns x raised to power y
* @x: The value to be raised to power
* @y: The power
* Return: returns -1 when lesser than 0,
*	  returns 1, when power is 0;
*	  returns x raised to y, when other values are inputed
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
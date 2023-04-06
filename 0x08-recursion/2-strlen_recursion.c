#include <stdio.h>
/**
* _strlen_recursion - a function that returns the length of a string
* @s: string to be evaluated
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	return (*s == '/0' ? 0 : 1 + _strlen_recursion(s + 1));
}

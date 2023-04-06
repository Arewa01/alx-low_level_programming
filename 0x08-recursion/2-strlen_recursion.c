#include <stdio.h>
/**
* _strlen_recursion - a function that returns the length of a string
* @s: string to be evaluated
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
		s++
	}
	return len;
}

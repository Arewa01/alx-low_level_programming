#include <stdio.h>
/**
* _strlen_recursion - a function that returns the length of a string
* @s: string to be evaluated
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	int length_string = 0;

	if (*s)
	{
		length_string++;
		length_string += __strlen_recursion(s + 1);
	}
	return (length_string);
}

#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int i, int len);
/**
 * is_palindrome - checks if a string is a palindrome using recursion
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - a function that returns the length of a string
* @s: string to be evaluated
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1  +  _strlen_recursion(s + 1));
}
/**
 * check_palindromw - checks the characters for palindrome recursively
 * @s: string to check
 * @i: iterator
 * @len: the length of the string
 *
 * Return: 1 if palindrome, 0 if not a palindrome
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

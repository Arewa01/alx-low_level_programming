#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strpbrk - a function that searches a string for any set of bytes
 * @s: String to be checked
 * @accept: string with bytes to be looked for
 * Return: returns a pointer to the byte of s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

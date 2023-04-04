#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 *  @s: string
 *  @c: character being searched for
 *  Return: Returns NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}

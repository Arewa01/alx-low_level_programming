include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string character
 * Return: The character length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


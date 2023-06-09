#include "main.h"
/**
 * _memset - fills the first n bytes of menory area
 * @n: number of bytes to set to the value of b
 * @b: value to set in each byte of the memory area
 * @s: pointer to the memory area to be filled
 *
 * Return: returns S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

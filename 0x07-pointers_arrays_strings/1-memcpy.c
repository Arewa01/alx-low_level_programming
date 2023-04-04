#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer to destination area
 * @src: a pointer to source area
 * @n: number of bytes to be copied
 *
 * Return: Returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return dest;
}

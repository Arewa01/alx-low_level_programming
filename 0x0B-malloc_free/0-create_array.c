#include "main.h"
#include <stdlib.h>
/**
 *create_array - a function that creates an array of characters
 *@c: character
 *@size: size of the array
 *Return: returns the array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	n = 0;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (n < size)
	{
		array[n] = c;
		n++;
	}
	return (array);
}

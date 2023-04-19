#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter
* on each element of an array
* @size: size of the array
* @action: a pointer to the function
* @array: the array to be iterated
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	size_t  i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

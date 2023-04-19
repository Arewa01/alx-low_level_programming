#include "function_pointers.h"
/**
* int_index - a function that searches for an integer
* @size: number of elements in the array.
* @array: array to be searched.
* @cmp: pointer to the function used to compare values
* Return: index of the first element for which cmp function
* does not return 0. If no element matches, return - 1
* if size <=0,  return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}

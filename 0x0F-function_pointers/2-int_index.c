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
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

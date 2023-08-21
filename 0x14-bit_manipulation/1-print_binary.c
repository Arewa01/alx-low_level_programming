#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * @b: the string that contains the binary numbers
 * Return: the converted number, or 0.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned int binary = 32;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 0; i < n; i++)
	{
		binary[i] += n & i;
		n >>= 1;
	}
}

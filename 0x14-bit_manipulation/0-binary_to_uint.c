#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * @b: the string that contains the binary numbers
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int decimal = 0;
	unsigned int length = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal += (b[i] - '0') * (1 << (length - i - 1));
	}
	return (decimal);
}

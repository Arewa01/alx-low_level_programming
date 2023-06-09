#include "main.h"
/**
 * _strspn - a functon that gets the length of a prefix substring
 * @s: string to be counted
 * @accept: string containing the characters
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
			break;
		count++;
	}
	return (count);
}

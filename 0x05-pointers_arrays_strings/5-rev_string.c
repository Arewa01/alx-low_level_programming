#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int i = 0, j, r;

	while (s[i])
		i++;

	j = i / 2;
	r = 0;

	while (r != j)
	{
		char temp = s[r];
		int l = i - r - 1;

		s[r] = s[l];
		s[l] = temp;

		r++;
	}

}

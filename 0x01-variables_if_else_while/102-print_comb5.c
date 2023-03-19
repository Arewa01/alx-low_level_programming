#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = '0'; x < '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar (' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(y);

			if (x == 98 && y == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

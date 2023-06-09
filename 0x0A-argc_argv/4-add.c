#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints the addition of two numbers
*@argc: the argument count
*@argv: the argument array
*Return: Always 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit((unsigned char)argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}

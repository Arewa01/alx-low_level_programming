#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*main - prints the addition of two numbers
*@argc: the argument count
*@argv: the argument array
*Return: Always 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc == 1)
		printf("0");
		return (0);
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit((unsigned char)argv[i][0])
			{
				printf("Error");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d", add);
	}
	return (0);
}

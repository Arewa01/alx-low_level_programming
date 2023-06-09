#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - prints the multiplication of two numbers
*@argc: the argument count
*@argv: the argument array
*Return: Always 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int first_num = atoi(argv[1]);
		int second_num = atoi(argv[2]);
		int mul = first_num * second_num;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - prints the number of arguments
*@argc: the argument count
*@argv: the argument arraye
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int first_num = atoi(char argv[1]);
		int second_num = atoi(char argv[2]);
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

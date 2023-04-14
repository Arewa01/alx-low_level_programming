#include <stdio.h>
#include "main.h"
/**
*main - prints the number of arguments
*@argc: the argument count
*@argv: the argument arraye
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[]))
{
	int i = 0;
	
	while (i < argc)
		printf("%s\n", argv[i]);
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
*main - prints the name of the program
*@argc: the argument count
*@argv: the argument array
*@real_count: subtracts the program name
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int real_count = argc - 1;
	
	printf("%d\n", real_count);
	return (0);
}

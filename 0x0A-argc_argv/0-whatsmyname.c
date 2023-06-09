#include <stdio.h>
#include "main.h"
/**
*main - prints the name of the program
*@argc: the argument count
*@argv: the argument array
*Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

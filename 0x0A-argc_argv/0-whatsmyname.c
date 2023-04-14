#include <stdio.h>
#include "main.h"
/**
*main - prints the name of the program
*@argc: the argument count
*@argv: the argument array
@Return: Always 0 (Success)
*/
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s", *argv);
}

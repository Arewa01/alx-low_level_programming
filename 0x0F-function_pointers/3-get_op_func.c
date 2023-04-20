#include "3-calc.h"
#include <string.h>
/**
* get_op_func - Returns a pointer to the function that corresponds
* to the operator given as a parameter.
* @s: The operator passed as argument to the program
* Return: a pointer to the function that corresponds to the operator
* given as a parameter
*/


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;
	int find = 0;

	while (ops[i].op && !find)
	{
		find = ((strcmp(ops[i].op, s) == 0));
		i++;
	}
	if (find)
	{
		return (ops[i - 1].f);
	}
	return (NULL);
}

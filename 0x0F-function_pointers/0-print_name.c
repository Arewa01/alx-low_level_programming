#include "function_pointers.h"
/**
* print_name - prints the name
* @name: name of the person
* @f: pointer
* Return - 0 at Success
*/
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
	return;
}

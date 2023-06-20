#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: struct dog being printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return ();
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, d->age, d->owner);
}

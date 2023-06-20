#include <stdio.h>
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
		printf("nothing");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Age: (nil)");
	}
	printf("Name: %s\nAge: %2f\nOwner: %s\n", d->name, d->age, d->owner);
}

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
	printf("Name: %s\n", d->name);
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	printf("Age: %2f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Age: (nil)");
	}
	printf("Owner: %s\n", d->owner);
}

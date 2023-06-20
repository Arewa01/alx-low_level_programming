#include <stdio.h>
/**
 * free_dog - a function that frees dogs
 * @d: struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

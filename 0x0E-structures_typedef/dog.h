#ifndef DOG_H
#define DOG_H

/**
* struct dog - Details of a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *newdog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

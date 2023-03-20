#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * @d: the particular dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

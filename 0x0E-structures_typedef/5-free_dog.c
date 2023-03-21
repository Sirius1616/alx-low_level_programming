#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * dog_t: the data type for the dog
 * @d: the dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

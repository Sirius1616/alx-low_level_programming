#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - a function that
 * @to: the destination for the copy
 * @from: the source of the copy
 *
 */
void _strcpy(char to[], char from[])
{
	int i;

	for (i = 0; from[i] != '\0'; i++)
		to[i] = from[i];
	to[i] = '\0';
}

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: 0 always
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	_strcpy(new_dog->name,  name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (0);
}

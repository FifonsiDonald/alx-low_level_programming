#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - creates dog object
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog object, NULL if fails
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (name && !d->name)
		return (free(d), NULL);
	d->owner = _strdup(owner);
	if (owner && !d->owner)
		return (free(d->name), free(d), NULL);
	d->age = age;
	return (d);
}

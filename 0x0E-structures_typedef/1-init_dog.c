#include "dog.h"
/**
 * init_dog - initializes structure
 * @d:  pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: me location of owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

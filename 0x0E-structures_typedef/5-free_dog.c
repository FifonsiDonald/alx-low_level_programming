#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to the dog to free.
 *
 * Return: Nothing (void).
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


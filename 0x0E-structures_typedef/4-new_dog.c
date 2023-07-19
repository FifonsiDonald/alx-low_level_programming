#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the new dog (dog_t), or NULL if function fails.
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return (NULL);

    // Declare the pointer first, then allocate memory
    dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
    if (new_dog == NULL)
    {
        // Handle memory allocation failure
        return NULL;
    }

    // Copy the name
    new_dog->name = strdup(name);
    if (new_dog->name == NULL)
    {
        // Handle memory allocation failure
        free(new_dog);
        return NULL;
    }

    // Copy the owner
    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL)
    {
        // Handle memory allocation failure
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    new_dog->age = age;

    return new_dog;
}


#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: initial size
 * @new_size: new size
 * @ptr: the pointer
 * Return: null if failed else new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	ptr2 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = ptr2[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = ptr2[i];
	}

	free(ptr);
	return (ptr1);
}

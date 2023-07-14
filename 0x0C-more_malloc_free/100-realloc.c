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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	unsigned char *byte_ptr = (unsigned char *)ptr;
	unsigned char *new_byte_ptr = (unsigned char *)new_ptr;

	unsigned int min_size = (old_size < new_size) ? old_size : new_size;

	for (unsigned int i = 0; i < min_size; i++)
	{
		new_byte_ptr[i] = byte_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size of mem location
 * Return: return null if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size)
		if (ptr ==  NULL)
			return (NULL);
	unsigned char *byte_ptr = (unsigned char *)ptr;

	for (unsigned int i = 0; i < total_size; i++)
		byte_ptr[i] = 0;
}

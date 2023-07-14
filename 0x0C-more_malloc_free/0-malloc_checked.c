#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: to allocated to
 * Return: 0 else 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr)
		return (ptr);
	exit(98);
}

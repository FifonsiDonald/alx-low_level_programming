#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: to allocated to
 * Return: 0 else 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @min: min valueof the array
 * @max: max value in the created array
 * Return: the pointer to the newly created array else null
 */
int *array_range(int min, int max)
{
	int *range;
	unsigned int width;

	if (max < min)
		return (NULL);

	width = max - min;

	range = malloc(sizeof(int) * (width + 1));
	if (!range)
		return (NULL);

	do {
		*range++ = min++;
	} while (min <= max);

	return (range - width - 1);
}

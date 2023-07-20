#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given
 * as a parameter on each element.
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * @array: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

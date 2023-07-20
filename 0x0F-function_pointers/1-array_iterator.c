#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * @array: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

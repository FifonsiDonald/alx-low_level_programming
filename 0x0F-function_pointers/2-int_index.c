#include "function_pointers.h:"
#include <stdio.h>
/**
 * int_index - function that searches for an integer.
 * @size: number of elements in the array array.
 * @cmp: pointer to the function to be used to compare values.
 * @array: array of string
 * Return: If no element matches, -1 else if size <= 0, -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	return (-1);
}

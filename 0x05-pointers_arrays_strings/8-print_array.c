#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the memmbers of an array with commas separating them.
 * @a: the array
 * @n: number of array elements to print
 * Return:void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

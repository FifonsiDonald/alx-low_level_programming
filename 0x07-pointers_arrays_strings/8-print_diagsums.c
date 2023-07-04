#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @size: integer location
 * @a: grabbing
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	int x = 0;

	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a -= size;
	}
	printf("%d, %d\n", x, y);
}

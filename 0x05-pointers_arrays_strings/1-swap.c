#include "main.h"

/**
 *swap_int - swaps values of a and b
 *@a: memory location
 *@b: memory location
 *Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int newa = *b;
	int newb = *a;

	*b = newb;
	*a = newa;
}

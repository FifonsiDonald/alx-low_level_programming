#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the provided index of the number.
 * @n: number
 * Return: the value of the bit at index index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && 64 > index)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}

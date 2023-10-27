#include "main.h"
/**
 * flip_bits - returns number of bits you need
 * to flip to get from one number to another.
 * @n: number one.
 * @m: number two.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit;

	bit = 0;
	n = n ^ m;
	while (n)
	{
		bit += n & 1;
		n >>= 1;
	}
	return (bit);
}

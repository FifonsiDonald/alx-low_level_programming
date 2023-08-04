#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: char to convert.
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int place, result;
	int i = 0;

	i = 0;
	result = 0;
	place = 1;

	if (!b)
		return (0);
	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if (*(b + i) == '1')
			result += place;
		place <<= 1;
	}
	return (result);
}

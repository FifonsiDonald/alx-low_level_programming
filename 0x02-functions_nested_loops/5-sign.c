#include "main.h"
/**
 * print_sign - prints sign of an int
 *@n: the nnumber's sign we determine
 *Return: 0 for 0 ,-1 for negatives and 1 for positives
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}

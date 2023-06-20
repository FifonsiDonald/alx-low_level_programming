#include "main.h"
/**
 *  print_last_digit - prints the last digit
 *  @n: the number we need to find the last digit of
 *  Return: value of the last digit c
 */
int print_last_digit(int n)
{
	int c;

	if (n > 0)
	{
		c = n % 10;
	}
	else
	{
		if (n == 0)
		{
			c = 0;
		}
		else
		{
			n = -n;
			c = n % 10;
			if (c < 0)
			{
				c = -c;
				_putchar(c + '0');
			}
		}
	}
	return (c);
}

#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i, v;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (v = 0; v < i; v++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"
/**
 *print_diagonal - prints daigonal line
 *@n: line limit
 * Return : void
 */

void print_diagonal(int n)
{
	int i, v;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (v = 0; v <  i; v++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}

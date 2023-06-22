#include "main.h"
/**
 *print_diagonal - prints daigonal line
 *@n: line limit
 * Return : void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{
		_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');
}

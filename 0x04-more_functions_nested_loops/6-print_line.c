#include "main"
/**
 *print_line - prints  line
 *@n: line limit
 *
 *
 * Return : void
 */

void print_line(int n)
{
	char v = '_';
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(v);
		}
	}
	_putchar('\n');
}

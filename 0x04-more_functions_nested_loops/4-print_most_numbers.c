#include "main.h"
/**
 *print_most_numbers - prints numbers except 1 and 4
 *Return: void
 */
void print_most_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

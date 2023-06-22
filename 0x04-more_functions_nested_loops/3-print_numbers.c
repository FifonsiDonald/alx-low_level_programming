#include "main"

/**
 *print_numbers - prints numbers 1 to 9
 *Return: NO return / void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

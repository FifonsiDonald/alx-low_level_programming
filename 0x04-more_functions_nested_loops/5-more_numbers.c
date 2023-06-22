#include "main.h"

/**
 * more_numbers - prints 1-14 x10
 * Return: void
 */
void more_numbers(void)
{
	int num2;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			(num2 > 9) ? _putchar((num2 % 10) + '0') : 0;
			_putchar((num2 / 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet - prints alphabet
 */
void print_alphabet_x10(void)
{
	char a;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (a = 'a'; a <= 'z'; ++a)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

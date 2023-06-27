#include "main.h"
/**
 * puts2 - prints string ommitting the multiples of two indexes
 * @str: - the string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}

	_putchar('\n');
}

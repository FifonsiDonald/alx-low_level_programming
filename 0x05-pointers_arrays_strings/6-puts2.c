#include "main.h"
/**
 * puts2 - prints string ommitting the multiples of two indexes
 * @str: - the string
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count += 2;
	}

	_putchar('\n');
}

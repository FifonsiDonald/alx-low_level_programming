#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	int half;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}
	half = (length + 1) / 2;

	for (i = half; i < count; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}

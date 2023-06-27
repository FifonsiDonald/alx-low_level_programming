#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	print_rev(s + 1);
	_putchar(*s);
}

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
		return;
	}

	print_rev(s + 1);
	_putchar(*s);
_putchar('\n');
}

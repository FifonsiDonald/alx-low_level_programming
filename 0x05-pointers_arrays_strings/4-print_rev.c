#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (int i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

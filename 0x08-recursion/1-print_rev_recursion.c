#include "main.h"
/**
 *_print_rev_recursion - prints reversed string
 * @s: string to recurse through
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s++);
		_putchar(*s)
	}
}

#include "main.h"
/**
 * reverse_array - prints string in reverse
 * @a: string to print
 * @n: index to end at
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int len = 0;
	int i;

	while (len < n && a[len] == "\0")
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

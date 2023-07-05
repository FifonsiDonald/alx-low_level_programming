#include "main.h"

/**
 * _strlen_recursion - gives the length of string using recursion
 * @s: string to recurse
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

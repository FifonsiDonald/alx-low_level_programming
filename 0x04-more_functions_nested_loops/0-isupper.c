#include "main.h"
/**
 * _isupper - checks if a char is upper case
 *@c: the char being checked
 * Return: 1 if char is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

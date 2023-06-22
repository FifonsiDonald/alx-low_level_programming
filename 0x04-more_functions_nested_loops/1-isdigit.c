#include "main.h"
/**
 * _isdigit - checks for alphabets
 *
 * @c: the var to be checked
 *
 * Return: 1 if its an int else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

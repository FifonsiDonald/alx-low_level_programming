#include "main.h"
/**
 * _islower - checks if a char is lower case
 *@c: the char being checked
 * Return: 1 if char is lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

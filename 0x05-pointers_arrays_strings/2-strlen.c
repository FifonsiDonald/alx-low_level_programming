#include "main.h"
/**
 *_strlen - returns string of length
 *@s: string to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

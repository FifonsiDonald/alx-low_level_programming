#include "main.h"
/**
 *_memset - copies bytes
 *@s: location
 *@b: location for string two
 *Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}
	return (s);
}

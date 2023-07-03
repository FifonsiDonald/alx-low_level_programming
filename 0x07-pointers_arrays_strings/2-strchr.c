#include "main.h"
/**
 *_strchr - copies bytes
 *@s: char
 *@c: location
 *@b: location for string two
 *Return: *s
 */
char *_strchr(char *s, char c)
{
	int i;

	while(*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		s++	
	}

}

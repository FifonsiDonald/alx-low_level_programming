#include "main.h"

/**
 * rot13 - encoding a string
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
		}
		++i;
	}
	return (s);
}

#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: the  input
 * @accept: another input
 *
 * Return: a pointer to the byte in s that matches on of the
 * bytes of  accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (a = 0; s[i]; i++)
	{
		for (b = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&(s[i]));
		}
	}
	return (0);
}

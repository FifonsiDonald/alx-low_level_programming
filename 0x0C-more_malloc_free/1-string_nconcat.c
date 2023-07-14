#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 two inlude
 * Return: null if failed else return ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *cat;

	unsigned int len1 = 0;
	unsigned int len2 = 0;
	
	if (s1)
	{
		while (s1[len1])
			++len1;
	}

	if (s2)
	{
		while (len2 < n && s2[len2])
			++len2;
	}

	cat = malloc(sizeof(char) * len1 + len2 + 1);
	if (!cat)
		return (NULL);

	for (n = 0; n < len1; ++n, ++cat)
		*cat = s1[n];

	for (n = 0; n < len2; ++n, ++cat)
		*cat = s2[n];

	*cat = '\0';

	return (cat - len1 - len2);
}

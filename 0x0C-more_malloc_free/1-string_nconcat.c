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

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	cat = malloc(sizeof(char) * (len1 + n + 1));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		cat[i] = s1[j];
	cat[i] = '\0';
	return (cat);
}

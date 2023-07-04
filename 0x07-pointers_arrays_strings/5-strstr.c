#include "main.h"
/**
 * _strstr - locate index of a substring
 * @haystack:location
 *@needle: location
 * Return: null if not found, beginning of string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack == *j && *j != 0 && *haystack != 0)
			haystack++, j++;
		if (*j == 0)
			return (i);
		haystack = ++i;
	}
	return (0);
}

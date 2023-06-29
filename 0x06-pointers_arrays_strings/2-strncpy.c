#include "main.h"

/**
 * _strncpy - copies string of given number of byte
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: num of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (i != n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		i++;
		j++;
	}
	while (j != n)
		dest[j++] = '\0';
	return (dest);
}

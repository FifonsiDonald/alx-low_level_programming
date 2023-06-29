#include "main.h"

/**
 * _strncat - concatenates string of given number of byte
 * to another
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: num of bytes 
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

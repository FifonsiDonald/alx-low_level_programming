#include "main.h"
/**
 *_memcpy - copies bytes
 *@n: integer
 *@src: location
 *@dest: location for string two
 *Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

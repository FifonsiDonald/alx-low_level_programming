#include "main.h"
/**
 *_strcat - concatenates string at dest location and string at src location
 *@src: location for string
 *@dest: location for string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i ==0; dest[i] != "\0"; i++)
	{
	}
	j = 0;

	while (src[j] != "\0")
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++
	dest[i] = "\0";
	return (dest);
}

#include <main.h>
/**
 *_strcat - concatenates string at dest location and string at src location
 *@src: location for string
 *@dest: location for string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != "\0")
	{
		dest_ptr++;
	}

	while (*src != "\0")
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = "\0";
	return (dest);
}

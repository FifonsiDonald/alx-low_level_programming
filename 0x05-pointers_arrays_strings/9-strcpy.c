#include "main.h"
/**
 *_strcpy - copies the string pointed to by src.
 * @dest:copying to
 * @src: copying from
 * Return: dest_ptr
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}

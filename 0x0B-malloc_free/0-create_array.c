#include "main.h"
/**
 * create_array - creates an array using malloc
 * @size: byte size
 * @c: string
 * Return: a pointer to the array or NULL if the process fails
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	int i;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(char) * size);

	if (j == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(j + i) = c;
	}
	return (j);
}

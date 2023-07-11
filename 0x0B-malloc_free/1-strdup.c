#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/***/
char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
		s = malloc(sizeof(*str) * size);
		if (a == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= size; i++)
			{
				s[i] = str[i];
			}
		}
	}
	return (s);
}

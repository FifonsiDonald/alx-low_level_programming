#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string passed to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

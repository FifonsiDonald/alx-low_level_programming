#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string passed to be reversed
 * Return: void
 */
void rev_string(char *s)
{

	int length = rev_string(s);
	char *start = s;
	char *end = s + length - 1;
	char temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

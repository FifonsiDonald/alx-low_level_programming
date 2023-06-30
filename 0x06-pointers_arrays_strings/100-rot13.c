#include "main.h"

/**
 * rot13 - encoding a string
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;

	char fir[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sec[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; fir[j] != '\0'; j++)
		{
			if (s[i] == fir[j])
			{
				s[i] = sec[j];
				break;
			}
		}
	}
	return (s);
}

#include "main.h"
/**
 * leet - encodes string
 * @s: pointer to an array
 * Return: Return coded leet string
 */
char *leet(char *s)
{
	int i, j;

	char low[] = "aeotl";
	char upp[] = "AEOTL";
	char leet[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; low[j] !=  '\0' && upp[j] != '\0'; j++)
		{
			if (s[i] == low[j] || s[i] == upp[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}

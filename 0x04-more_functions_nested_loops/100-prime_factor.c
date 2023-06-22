#include <stdio.h>

/**
 * main - prints the largest prime factors
 *
 * Return: 0
 */

int main(void)
{
	long int k = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		while (k % i == 0)
			k /= i;
	}

	printf("%ld\n", k);

	return (0);
}

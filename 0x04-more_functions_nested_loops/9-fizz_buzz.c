#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3, Buzz for those of 5
 * FIzzBuzz for multiples of both 3 and 5.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		(i % 3 == 0) ? printf("Fizz") : 0;
		(i % 5 == 0) ? printf("Buzz") : 0;
		(i % 3 != 0 && i % 5 != 0) ? printf("%d", i) : 0;
		(i != 100) ? printf(" ") : 0;
	}
	printf("\n");
	return (0);
}

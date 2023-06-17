#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


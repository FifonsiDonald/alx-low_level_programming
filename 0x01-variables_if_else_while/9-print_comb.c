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

	for (a = 0; a < 9; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
	}

	putchar('9');
	return (0);
}


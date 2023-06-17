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

for (a = -1; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}

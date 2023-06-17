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
int num;

char letter;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

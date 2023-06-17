#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
int tensDigit;
for (tensDigit = 0; tensDigit < 9; tensDigit++)
{
int unitsDigit;
for (unitsDigit = tensDigit + 1; unitsDigit < 10; unitsDigit++)
{
putchar(tensDigit + '0');
putchar(unitsDigit + '0');
if (tensDigit != 8 || unitsDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


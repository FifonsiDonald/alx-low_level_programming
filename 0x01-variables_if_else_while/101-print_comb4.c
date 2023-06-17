#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
int hundredsDigit;
for (hundredsDigit = 0; hundredsDigit < 8; hundredsDigit++)
{
int tensDigit;
for (tensDigit = hundredsDigit + 1; tensDigit < 9; tensDigit++)
{
int unitsDigit;
for (unitsDigit = tensDigit + 1; unitsDigit < 10; unitsDigit++)
{
putchar(hundredsDigit + '0');
putchar(tensDigit + '0');
putchar(unitsDigit + '0');
if (hundredsDigit != 7 || tensDigit != 8 || unitsDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}


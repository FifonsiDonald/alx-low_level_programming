#include "main.h"
/**
 *print_square - prints a square
 *@size: square limit
 * Return : void
 */
void print_square(int size)
{
int i, d;

for (i = 0; i < size; i++)
{
if (size <= 0)
{
_putchar ('\n');
return;
}
else
{
for (d = 0; d < size; d++)
{
_putchar ('#');
}
}
_putchar ('\n');
}
}

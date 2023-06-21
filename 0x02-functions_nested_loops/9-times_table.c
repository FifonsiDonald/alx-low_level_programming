#include "main.h"
/**
 * times_table -prints timetable
 *Return: 0 when ran
 */
void times_table(void)
{
int i, a, s;

for (i = 0; i < 10; i++)
{
for (a = 0; a < 10; a++)
{
s = i * a;

if (s < 10)
{
if (a == 0 && i != 0)
{
_putchar(s + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(s + '0');
}
}
else
{
_putchar(' ');
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
}
if (a < 9)
{
_putchar(',');
}
}
_putchar('\n');
}

}


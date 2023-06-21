#include "main.h"

int main(void)
{
for (int i = 0; i < 9; i++) {
for (int a = 0; a < 10; a++) {
int s = i * a;

if (s < 10) {
if (a == 0 && i != 0) {
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(s + '0');
} else {
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(s + '0');
}
} else {
_putchar(' ');
_putchar(' ');
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
}

if (a < 9) {
_putchar(',');
}
}

_putchar('\n');
}

return 0;
}


/**
* main - prints fib starting from 1 and 2.
*Return: Always 0.
*/

int main(void)
{
int count;

unsigned long fibl = 0, fib2 = 1, sum;
unsigned long fib1_half1, fib1_half2, fib2 half1, fib2_half2;
unsigned long half1, half2;

for (count = 0; count < 92; count++)
{
sum = fibl + fib2;
printf("%lu, ", sum);
fibl = fib2;
fib2 = sum;
}
fibl_half1 = fib1 / 10000000000;
fib2_half1 = fib2 / 10000000000;
fibl_half2 = fib1 % 10000000000;
for (count = 93; count < 99; count++)
{
half1 =  fib1_half1 + fib2_half1;
half2 =  fibl_half2 + fib2_half2;
if (fibl half2  + fib2_hal12 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (count != 98)
{
printf(", ");

fib1_half1 = fib2_half1;
fib1_half2 = fib2_half2;
fib2_half1 = half1;
fib2_half2 = half2;
}
printf("\n");
return (0);
}

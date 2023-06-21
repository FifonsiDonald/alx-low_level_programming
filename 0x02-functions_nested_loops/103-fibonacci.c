#include <stdio.h>

/**
*main - program that prints the first 50 Fibonacci numbers,
*Return: Always 0.
*/

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fibosum;
	float total_sum;

	while (1)
	{
		fibosum = fibo1 + fibo2;
		if (fibosum > 4000000)
			break;
		if ((fibosum % 2) == 0)
			total_sum += fibosum;

		fibo1 = fibo2;
		fibo2 = fibosum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}

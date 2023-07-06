#include "main.h"
/**
 * _sqrt_recursion - squrt using recursion
 * @n: number to find square root of
 * Return: squrt
 */
int _sqrt_recursion(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	if (i * i == n)
		return (x);
	i = (i + (n / i)) / 2;

	return (_sqrt_recursion(i));
}

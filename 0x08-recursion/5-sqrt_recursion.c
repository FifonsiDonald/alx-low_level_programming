#include "main.h"
/**
 * _sqrt_recursion - squrt using recursion
 * @n: number to find square root of
 * Return: squrt
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));

}
/**
 * helper - helps decide if i'm right
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}


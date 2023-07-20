#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: first argument
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;

		va_start(args, n);
		for (unsigned int i = 0; i < n; ++i)
		{
			int a = va_arg(args, int);

			sum += a;
		}
		var_end(args);

		return (sum);

	}
}

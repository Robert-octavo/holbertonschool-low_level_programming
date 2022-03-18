#include "variadic_functions.h"
/**
 * sum_them_all - Write a function that returns
 * the sum of all its parameters
 * @n: is the number of arguments
 * Return: the add of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, res;

	if (n == 0)
		return (0);

	va_start(args, n);
	res = 0;

	for (i = 0; i < n; i++)
	{
		res += va_arg(args, unsigned int);
	}

	va_end(args);
	return (res);
}

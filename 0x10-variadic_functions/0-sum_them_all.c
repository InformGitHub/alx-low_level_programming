#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: args's number
 * @...: integers to sum
 *
 * Return: integers's sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int S = 0, k = n;
	va_list sn;
	
	if (!n)
		return (0);
	va_start(sn, n);
	while (k--)
		S += va_arg(sn, int);
	va_end(sn);
	return (S);
}

#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: args's number
 * @...: integers to sum
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int k = n;
	va_list sn;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(sn, n);
	while (k--)
		printf("%d%s", va_arg(sn, int),
				k ? (separator ? separator : "") : "\n");
	va_end(sn);
}

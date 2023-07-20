#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: args's number
 * @...: integers to sum
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int k = n;
	va_list sn;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(sn, n);
	while (k--)
		printf("%s%s", (str = va_arg(sn, char *)) ? str : "(nil)",
				k ? (separator ? separator : "") : "\n");
	va_end(sn);
}

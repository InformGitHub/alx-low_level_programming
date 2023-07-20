#include "variadic_functions.h"

/**
 * format_char - formats_characters
 * @separator: string to be printed between numbers
 * @sn: arg pointer
 *
 * Return: void
 */
void format_char(char *separator, va_list sn)
{
	printf("%s%c", separator, va_arg(sn, int));
}

/**
 * format_int - formats_int
 * @separator: string to be printed between numbers
 * @sn: arg pointer
 *
 * Return: void
 */
void format_int(char *separator, va_list sn)
{
	printf("%s%d", separator, va_arg(sn, int));
}

/**
 * format_float - formats_float
 * @separator: string to be printed between numbers
 * @sn: arg pointer
 *
 * Return: void
 */
void format_float(char *separator, va_list sn)
{
	printf("%s%f", separator, va_arg(sn, double));
}

/**
 * format_string - formats_string
 * @separator: string to be printed
 * @sn: arg pointer
 *
 * Return: void
 */
void format_string(char *separator, va_list sn)
{
	char *str = va_arg(sn, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: format str
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int k = 0, m;
	char *separator = "";
	va_list sn;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(sn, format);
	while (format && format[k])
	{
		m = 0;
		while (tokens[m].token)
		{
			if (format[k] == tokens[m].token[0])
			{
				tokens[m].f(separator, sn);
				separator = ", ";
			}
			m++;
		}
		k++;
	}
	printf("\n");
	va_end(sn);
}

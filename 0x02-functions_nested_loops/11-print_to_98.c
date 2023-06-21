#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: digit to be printed
 *
 * Description: function
 * main.h: prototype of function
 */
void print_to_98(int n)
{
	int k, l;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
	else if (n >= 98)
	{
		for (l = n; l >= 98; l--)
		{
			if (l != 98)
				printf("%d, ", l);
			else if (l == 98)
				printf("%d\n", l);
		}
	}
}

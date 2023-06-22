#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Description: function
 * Return:void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;
		int k;

		for (l = 0; l < n; l++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == l)
				{
					_putchar('\\');
				}
				else if (k < l)
				{
					_putchar('_');
				}
			}
			_putchar('\n');
		}
	}
}

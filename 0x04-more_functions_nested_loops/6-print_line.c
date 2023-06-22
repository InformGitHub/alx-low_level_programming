#include "main.h"
#include <unistd.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character
 *
 * Description: function
 * Return:void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

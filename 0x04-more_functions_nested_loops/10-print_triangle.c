#include "main.h"
#include <unistd.h>

/**
 * print_triangle -  prints triangle
 * @size: size of triangle
 *
 * Description: function
 * Return:void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, k;

		for (l = 1; l <= size; l++)
		{
			for (k = l; k < size; k++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= l; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

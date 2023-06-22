#include "main.h"
#include <unistd.h>

/**
 * print_square -  prints a square
 * @size: size of the square
 *
 * Description: function
 * Return:void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, k;

		for (l = 0; l < size; l++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

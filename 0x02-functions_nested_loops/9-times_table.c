#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: function
 * main.h: prototype of function
 * Return: void
 */
void times_table(void)
{
	int y, z, x;

	for (y = 0; y < 10; y++)
	{
		for (z = 0; z < 10; z++)
		{
			x = y * z;
			if (z == 0)
			{
				_putchar(x + '0');
			}

			else if (x < 10 && z != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

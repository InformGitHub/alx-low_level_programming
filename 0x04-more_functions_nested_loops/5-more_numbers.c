#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description: function
 * Return:void
 */
void more_numbers(void)
{
	int k, h;

	for (h = 0; h <= 10; h++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar('1');
			}
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}

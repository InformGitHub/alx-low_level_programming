#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Description: function
 * Return:void
 */
void print_most_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		if (!((h == '2') || (h == '4')))
		{
			_putchar(h);
		}
	}
	_putchar('\n');
}

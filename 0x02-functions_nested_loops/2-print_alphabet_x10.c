#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - print 10 times alphabet
 *
 * Description: function that prints 10 times alphabet
 * main.h: prototype of function:
 * Return: void
 */
void print_alphabet_x10(void)
{
	char le;
	int i;

	i = 0;

	while (i < 10)
	{
		for (le = ' '; le <= 'z'; le++)
		{
			_putchar(le);
		}
		_putchar('\n');
		i++;
	}
}

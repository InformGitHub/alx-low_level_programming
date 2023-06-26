#include <stdio.h>
#include "main.h"

/**
 * puts_half - print the second half of the string
 *
 * Description: function
 * @str: string printing
 * Return:void
 */
void puts_half(char *str)
{
	int half, begin, l = 0;

	for (begin = 0; str[begin] != '\0'; begin++)
	{
		l++;
	}

	half = l / 2;

	if ((l % 2) == 1)
	{
		half = (l + 1) / 2;
	}
	for (begin = half; str[begin] != '\0'; begin++)
	{
		_putchar(str[begin]);
	}
	_putchar('\n');
}

#include "main.h"
#include <unistd.h>

/**
 * puts2 - returns the length of a string
 *
 * Description: function
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int m, l = 0, k = 0;
	char *n = str;

	while (*n != 0)
	{
		n++;
		l++;
	}
	k = l - 1;
	for (m = 0; m <= k; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}

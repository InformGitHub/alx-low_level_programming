#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * Description: function
 * @s: str
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int l2 = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	for (l2 = l; l2 > 0; l2--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

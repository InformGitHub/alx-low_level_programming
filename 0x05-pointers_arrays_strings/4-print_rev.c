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
	int n;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	for (n = l; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints a string
 *
 * Description: function
 * @str: string printing
 * Return:void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

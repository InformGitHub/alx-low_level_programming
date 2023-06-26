#include <stdio.h>

/**
 * void _puts - prints a string
 *
 * Description: function
 * @str: string printing
 * Return:void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary's number printing
 *
 * Return: N
 */
void print_binary(unsigned long int n)
{
	int k;
	int count = 0;
	unsigned long int current_up;

	for (k = 63; k >= 0; k--)
	{
		current_up = n >> k;
		if (current_up & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}


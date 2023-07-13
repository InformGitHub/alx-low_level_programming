#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_digit_int - printing int
 * @k: int
 *
 * Return: 0
 */
void print_digit_int(unsigned long int k)
{
	unsigned long int m, d = 0, rlt;

	for (m = 0; (k / d) > 9; m++, d *= 10)
	;
	for (; d >= 1; k %= d, d /= 10)
	{
		rlt = k / d;
		_putchar('0' + rlt);
	}
}

/**
 * main - printing multiplication's result
 * @argc: digit or int
 * @argv: array (list)
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	print_digit_int(atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @c: character to be checked
 *
 * Description: function that checks for lowercase character.
 * main.h: prototype of function
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int last_number;

	last_number = c % 10;
	if (last_number < 0)
	{
		return (-last_number);
	}
	_putchar(last_number + '0');
	return (last_number);
}

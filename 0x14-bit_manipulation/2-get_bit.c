#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: byte's index
 * @n: binary's number printing
 *
 * Return: bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valueB;

	if (index > 63)
	{
		return (-1);
	}
	valueB = (n >> index) & 1;
	return (valueB);
}

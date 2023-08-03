#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @m: N
 * @n: N
 *
 * Return: N
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;
	int count = 0;
	unsigned long int current_up;
	unsigned long int exclusive = n ^ m;

	for (k = 0; k >= 0; k--)
	{
		current_up = exclusive >> k;
		if (current_up & 1)
			count++;
	}
	return (count);
}

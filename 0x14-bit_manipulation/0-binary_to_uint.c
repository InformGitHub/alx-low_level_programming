#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary's number string
 *
 * Return: N
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int valueD = 0;

	if (!b)
	{
		return (0);
	}
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		valueD = 2 * valueD + (b[k] - '0');
	}
	return (valueD);
}

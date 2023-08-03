#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 (little), 0 (big)
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *ch = (char *) &k;
	return (*ch);
}

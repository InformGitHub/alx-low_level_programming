#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: bytes's number allocating
 * Return: pointer allocating memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

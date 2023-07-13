#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @new_size: new size, in bytes of the new memory block
 * @old_size: size, in bytes, of the allocated space for ptr
 *
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * Return: NULL if new_size = 0 and ptr if not
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (k = 0; k < new_size && k < old_size; k++)
			*((char *)p + k) = *((char *)ptr + k);
		free(ptr);
	}
	return (p);
}

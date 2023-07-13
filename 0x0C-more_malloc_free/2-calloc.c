#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @b: desired value
 * @n: number of bytes changing
 *
 * @s:starting address of memory
 * Return: values changed (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 *
 * Description: function
 * @nmemb: array's lenght
 * @size: element's size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(sizeof(int) * nmemb);
	if (c == NULL)
		return (NULL);
	_memset(c, 0, (sizeof(int) * nmemb));
	return (c);
}


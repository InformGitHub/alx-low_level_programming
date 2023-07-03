#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
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

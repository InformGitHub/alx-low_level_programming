#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @n: function copies
 *
 * @src: bytes from memory area
 * @dest: bytes to memory area
 * Return: values changed (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int k = n;

	for (; m < k; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

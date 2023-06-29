#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @n: idigit
 *
 * Description: function
 * @src: idigit
 * @dest: idigit
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0, m = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (m < n && src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - concatenates two strings
 * @n: ivalue
 *
 * Description: function
 * @src: ivalue
 * @dest: ivalue
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}

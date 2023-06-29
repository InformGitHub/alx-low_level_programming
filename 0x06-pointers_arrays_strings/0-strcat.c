#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * Description: function
 * @src: idigit
 * @dest: idigit
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int k = 0, m = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}

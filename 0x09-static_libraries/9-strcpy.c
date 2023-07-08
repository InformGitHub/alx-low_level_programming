#include "main.h"
#include <unistd.h>

/**
 * *_strcpy - returns the length of a string
 *
 * Description: function
 * @dest: ct
 * @src: cf
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int lo = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; lo < l; lo++)
	{
		dest[lo] = src[lo];
	}
	dest[l] = '\0';
	return (dest);
}

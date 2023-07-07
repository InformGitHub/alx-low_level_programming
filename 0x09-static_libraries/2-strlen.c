#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Description: function
 * @s: string
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

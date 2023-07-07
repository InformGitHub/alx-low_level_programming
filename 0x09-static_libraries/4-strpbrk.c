#include "main.h"

/**
 * *_strpbrk - gets the length of a prefix substring
 *
 * @s: string cherching
 * @accept: bytes searching for (setting)
 * Return: char 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string cherching
 * @accept: prefix mesuring
 * Return: values changed (s)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				k++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}

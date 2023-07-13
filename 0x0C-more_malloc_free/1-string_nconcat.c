#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * Description: function
 * @s1: string appending to
 * @s2: string concatenating from
 * @n: bytes's number s2 concatenating s1
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, k2 = 0, l = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l] != '\0')
		l++;
	while (s2[l2] != '\0')
		l2++;
	s = malloc(l + n + 1);
	if (!s)
		return (NULL);
	for (k = 0; s1[k] != 0; k++)
		s[k] = s1[k];
	for (k2 = 0; k2 < n; k2++)
	{
		s[k] = s2[k2];
		k++;
	}
	s[k] = '\0';
	return (s);
}

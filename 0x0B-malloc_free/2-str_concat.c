#include <stdlib.h>
#include "main.h"

/**
 * str_concat - pointer should point to a newly
 * allocated space in memory which
 * contains the contents of s1, followed by the
 * contents of s2, and null terminated
 *
 * Description: function
 * @s1: iconcat
 * @s2: iconcat
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int k = 0, k2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
		k++;
	while (s2[k2] != '\0')
		k2++;
	cat = malloc(sizeof(char) * (k + k2 + 1));
	if (cat == NULL)
		return (NULL);
	k = k2 = 0;

	while (s1[k] != '\0')
	{
		cat[k] = s1[k];
		k++;
	}
	while (s2[k2] != '\0')
	{
		cat[k] = s2[k2];
		k++;
		k2++;
	}
	cat[k] = '\0';
	return (cat);
}

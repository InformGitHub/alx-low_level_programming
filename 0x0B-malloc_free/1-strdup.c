#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a new string which
 * is a duplicate of the string str
 *
 * Description: function
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *str2;
	int k = 0, k2;

	if (str == NULL)
		return (NULL);
	while (str[k] != '\0')
		k++;
	str2 = malloc(sizeof(char) * (k + 1));
	if (str2 == NULL)
		return (NULL);
	for (k2 = 0; str[k2]; k2++)
		str2[k2] = str[k2];
	return (str2);
}

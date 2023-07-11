#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 *
 * Description: function
 * @ac: int inputing
 * @av: array's double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int k, k2;
	char *str;
	int l = 0, l2 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (k2 = 0; av[k][k2]; k2++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (k2 = 0; av[k][k2]; k2++)
		{
			str[l2] = av[k][k2];
			l2++;
		}
		if (str[l2] == '\0')
			str[l2++] = '\n';
	}
	return (str);
}


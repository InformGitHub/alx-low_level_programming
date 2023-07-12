#include "main.h"
#include <stdlib.h>

/**
 * count_w_str - count number of words in a string
 *
 * @s: str evaluating
 * Return: word's number
 */
int count_w_str(char *s)
{
	int wd = 0, Flag = 0, k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] != ' ')
			Flag = 0;
		else if (Flag == 0)
		{
			Flag = 1;
			wd++;
		}
	}
	return (wd);
}

/**
 * strtow - returns a pointer to an array of strings (words)
 *
 * @str: str spliting
 * Return: NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
char **strtow(char *str)
{
	char *tmp, **matrix;
	int k, k2 = 0, ch = 0, l = 0, wds_count, begin, end;

	while (*(str + l))
		l++;
	wds_count = count_w_str(str);
	if (wds_count == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (wds_count + 1));
	if (matrix == NULL)
		return (NULL);
	for (k = 0; k <= l; k++)
	{
		if (str[k] == ' ' || str[k] == '\0')
		{
			if (ch)
			{
				end = k;
				tmp = (char *) malloc(sizeof(char) * (ch + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				matrix[k2] = tmp - ch;
				k2++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			begin = k;
	}
	matrix[k2] = NULL;
	return (matrix);
}

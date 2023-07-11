#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * Description: function
 * @size: array's size
 * @c: char assigning
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}

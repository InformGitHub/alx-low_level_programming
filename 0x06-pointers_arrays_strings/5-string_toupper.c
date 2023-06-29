#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Description: function
 * @str: pointer
 * Return: 0
 */
char *string_toupper(char *str)
{
	int k;

	assert(str != NULL);

	for (k = 0; str[k] != '\0'; k++)
		str[k] = (char)toupper(str[k]);
	return (str);
}

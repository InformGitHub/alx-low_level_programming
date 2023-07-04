#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to pointer
 * @to: pointer of char type
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

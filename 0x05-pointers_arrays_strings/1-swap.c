#include "main.h"
#include <unistd.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * Description: function
 * @a: digit to swap
 * @b: digit to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

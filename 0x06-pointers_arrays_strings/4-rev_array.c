#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * Description: function
 * @a: ivalue
 * @n: ivalue
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int k, h;

	for (k = 0; k < n--; k++)
	{
		h = a[k];
		a[k] = a[n];
		a[n] = h;
	}
}


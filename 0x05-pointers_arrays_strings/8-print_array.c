#include <stdio.h>
#include "main.h"

/**
 * print_array - copies the string pointed to by src
 * @n: number of element of array
 *
 * Description: function
 * @a: array name
 * Return:void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == (n - 1))
	{
		printf("%d", a[m]);
	}
	printf("\n");
}

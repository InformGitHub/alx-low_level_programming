#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * @min: integer's starting
 * @max: digit max
 *
 * Return: int's array
 */
int *array_range(int min, int max)
{
	int *p, sl, k;

	if (min > max)
		return (NULL);
	sl = max - min + 1;
	p = malloc(sizeof(int) * sl);
	if (!p)
		return (NULL);
	for (k = 0; min <= max; k++)
		p[k] = min++;
	return (p);
}

#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int's array
 * @size: array's size
 * @cmp: function's compare
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (cmp && size && array)
		while (k < size)
		{
			if (cmp(array[k]))
				return (k);
			k++;
		}
	return (-1);
}

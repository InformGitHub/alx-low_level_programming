#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @size: array's size
 * @array: int's array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *iE = array + size - 1;

	if (action && size && array)
		while (array <= iE)
			action(*array++);
}

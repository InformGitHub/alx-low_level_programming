#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: i
 * @size: i
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int S = 0, S_ = 0, k;

	for (k = 0; k < size; k++)
	{
		S = S + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		S_ += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", S, S_);
}

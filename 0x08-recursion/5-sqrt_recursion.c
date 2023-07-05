#include "main.h"

int N_sqrt_recursion(int n, int k);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number calculating a square root of
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (N_sqrt_recursion(n, 0));
}

/**
 * N_sqrt_recursion - recursing to find natural
 *
 * @n: number calculating a square root of
 * @k: iterator
 * Return: resulting square root
 */
int N_sqrt_recursion(int n, int k)
{
	if (k * k > n)
		return (-1);
	else if (k * k == n)
		return (k);
	return (N_sqrt_recursion(n, k + 1));
}

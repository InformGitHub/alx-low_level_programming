#include "main.h"

int N_prime_number(int n, int k);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: number evaluating
 * Return: 1 if a prime number, 0 else
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (N_prime_number(n, n - 1));
}

/**
 * N_prime_number - calculates if number is prime recursively
 *
 * @n: number evaluating
 * @k: iterator
 * Return: 1, if it's a prime; 0 else
 */
int N_prime_number(int n, int k)
{
	if (k == 1)
		return (1);
	else if (n % k == 0 && k > 0)
		return (0);
	return (N_prime_number(n, k - 1));
}

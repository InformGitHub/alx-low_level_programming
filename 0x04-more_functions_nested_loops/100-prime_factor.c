#include <math.h>
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Description: function
 * Return: 0
 */
int main(void)
{
	long int max, k, n;

	k = 612852475143;
	max = -1;

	while (k % 2 == 0)
	{
		k /= 2;
		max = 2;
	}
	for (n = 3; n <= sqrt(k); n = n + 2)
	{
		while (k % n == 0)
		{
			max = n;
			k /= n;
		}
	}
	if (k > 2)
	{
		max = k;
	}
	printf("%ld\n", max);
	return (0);
}

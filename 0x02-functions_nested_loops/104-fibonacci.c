#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int k, f = 1, f1, f2, ft = 2, ft1, ft2, lo = 1000000000;

	printf("%lu", f);
	for (k = 1; k < 91; ++k)
	{
		printf(", %lu", ft);
		ft += f;
		f = ft - f;
	}
	f1 = f / lo;
	f2 = f % lo;
	ft1 = ft / lo;
	ft2 = ft / lo;
	for (k = 92; k < 99; k++)
	{
		printf(", %lu", ft1 + (ft2 / lo));
		printf(", %lu", ft1 % lo);
		ft1 = ft1 + f1;
		f1 = ft1 - f1;
		ft2 = ft2 + f2;
		f2 = ft2 - f2;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 *
 * main.h: prototype of function
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int h;

	for (h = 0; h < 1024; h++)
	{
		if ((h % 3) == 0 || (h % 5) == 0)
		{
			sum += h;
		}
	}
	printf("%d\n", sum);
	return (0);
}

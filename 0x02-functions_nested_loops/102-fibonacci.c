#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int c;
	unsigned long fib = 0, fib_ = 1, sum = 0;

	for (c = 0; c < 50; c++)
	{
		sum = fib + fib_;
		printf("%lu", sum);
		fib = fib_;
		fib_ = sum;
		if (c == 49)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
	return (0);
}

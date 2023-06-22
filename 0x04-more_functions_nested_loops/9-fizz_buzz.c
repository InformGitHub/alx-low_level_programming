#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Description: function
 * Return:void
 */
int main(void)
{
	int h;

	for (h = 1; h <= 100; h++)
	{
		if ((h % 3 == 0) && (h % 5 != 0))
		{
			printf(" Fizz");
		}
		else if ((h % 5 == 0) && (h % 3 != 0))
		{
			printf(" Buzz");
		}
		else if ((h % 5 == 0) && (h % 3 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (h == 1)
			printf("%d", h);
		else
			printf(" %d", h);
	}
	printf("\n");
	return (0);
}

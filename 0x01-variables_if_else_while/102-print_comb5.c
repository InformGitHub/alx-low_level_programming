#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two two-digit numbers
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int k, p;

	for (k = 0; k < 100; k++)
	{
		for (p = 0; p < 100; p++)
		{
			if (k < p)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				if (k != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

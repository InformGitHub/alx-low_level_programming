#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int k, p;

	for (k = 48; k <= 56; k++)
	{
		for (p = 49; p <= 57; p++)
		{
			if (p > k)
			{
				putchar(k);
				putchar(p);
				if (k != 56 || p != 57)
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

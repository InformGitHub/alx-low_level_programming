#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int k, p, u;

	for (k = 48; k < 58; k++)
	{
		for (p = 49; p < 58; p++)
		{
			for (u = 50; u < 58; u++)
			{
				if (u > p && p > k)
				{
					putchar(k);
					putchar(p);
					putchar(u);
					if (k != 55 || p != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Description: function
 * Return: 0
 */
int main(void)
{
	int passwords[100];
	int S, k, m;

	S = 0;

	srand(time(NULL));
	for (k = 0; k < 100; k++)
	{
		passwords[k] = rand() % 78;
		S = S + (passwords[k] + '0');
		putchar(passwords[k] + '0');
		if ((2772 - S) - '0' < 78)
		{
			m = (2772 - S) - '0';
			S = S + m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * Description: function
 * @s: string converting
 * Return: m (int)
 */
int _atoi(char *s)
{
	int k = 0, l = 0, nd = 0, Nu = 0, m = 0, u = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (u < l && nd == 0)
	{
		if (s[u] == '-')
		{
			++k;
		}
		if (s[u] >= '0' && s[u] <= '9')
		{
			Nu = s[u] - '0';
			if (k % 2)
			{
				Nu = -Nu;
			}
			m = m * 10 + Nu;
			nd = 1;
			if (s[u + 1] < '0' || s[u + 1] > '9')
				break;
			nd = 0;
		}
		u++;
	}
	if (nd == 0)
	{
		return (0);
	}
	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 1 if error, 0 (success)
 */
int main(int argc, char *argv[])
{
	int R, N1, N2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	N1 = _atoi(argv[1]);
	N2 = _atoi(argv[2]);
	R = N1 * N2;
	printf("%d\n", R);
	return (0);
}

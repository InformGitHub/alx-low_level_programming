#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int Num, R = 0, k;
	int money_coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	Num = atoi(argv[1]);

	if (Num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && Num >= 0; k++)
	{
		while (Num >= money_coins[k])
		{
			R++;
			Num -= money_coins[k];
		}
	}
	printf("%d\n", R);
	return (0);
}

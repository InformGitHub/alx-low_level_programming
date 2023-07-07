#include "main.h"
#include <stdio.h>
#include  <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checking_digit - digit stringing
 * @str: pointer of array
 *
 * Return: 0
 */
int checking_digit(char *str)
{
	unsigned int Count = 0;

	while (Count < strlen(str))
	{
		if (!isdigit(str[Count]))
			return (0);
		Count++;
	}
	return (1);
}

/**
 * main - prints name of program
 * @argc: (Count) number of arg
 * @argv: array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int Count = 1, S = 0, str_to_int;

	while (Count < argc)
	{
		if (checking_digit(argv[Count]))
		{
			str_to_int = atoi(argv[Count]);
			S += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		Count++;
	}
	printf("%d\n", S);
	return (0);
}

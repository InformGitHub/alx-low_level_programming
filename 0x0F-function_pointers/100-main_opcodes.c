#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - checking
 * @argc: args's number
 * @argv: vector's arg
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int k;

	if (argc != 2)
		printf("Error\n"), exit(1);
	k = atoi(argv[1]);
	if (k < 0)
		printf("Error\n"), exit(2);
	while (k--)
		printf("%02hhx%s", *p++, k ? " " : "\n");
	return (0);
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check code for student's school
 * @argc: args's number
 * @argv: vector's arg
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), k, m;

	if (argc != 4)
		printf("Error\n"), exit(98);
	k = atoi(argv[1]);
	m = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);
	if (!m && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", op_func(k, m));
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints a[2] = 98
 *
 * Description: function
 * Return: 0
 */
int main(void)
{
	int m;
	int a[5];
	int *k;

	a[2] = 1024;
	k = &m;
	*(k + 5) = 98;
	printf ("a[2] = %d\n", a[2]);
	return (0);

}


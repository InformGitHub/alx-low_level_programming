#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - test for positive or negative
 * @i: digit to be checked
 *
 * Description: function
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("i is positive\n");
	else if (i == 0)
		printf("i is zero\n");
	else
		printf("i is negative\n");
}

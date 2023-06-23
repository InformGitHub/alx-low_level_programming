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
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

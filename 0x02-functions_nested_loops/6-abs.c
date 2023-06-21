#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *@c: number computing
 *
 * Description: function
 * main.h: prototype of function in place
 * Return: c if + and -c if -
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}

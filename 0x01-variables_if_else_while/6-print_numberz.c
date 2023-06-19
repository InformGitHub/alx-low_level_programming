#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

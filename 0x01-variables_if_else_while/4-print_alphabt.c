#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print all the letters except q and e
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		if (i != 101 && i != 113)
			putchar(i);

	putchar('\n');

	return (0);
}

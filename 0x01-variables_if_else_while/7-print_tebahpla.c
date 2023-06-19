#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	char R;

	for (R = 'z'; R >= 'a'; R--)
		putchar(R);

	putchar('\n');

	return (0);
}

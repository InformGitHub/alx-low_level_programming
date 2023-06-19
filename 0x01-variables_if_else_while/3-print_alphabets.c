#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	char a[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
		putchar(a[i]);

	putchar('\n');

	return (0);
}

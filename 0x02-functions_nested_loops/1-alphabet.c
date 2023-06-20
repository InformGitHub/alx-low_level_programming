#include "main.h"
#include <unistd.h>

/**
 * print alphabet - function printing alphabet in lowercase
 *
 * Return:void
 */

/* betty style doc for function main goes there */

void print_alphabet(void);

void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}

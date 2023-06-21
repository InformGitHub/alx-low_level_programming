#include "main.h"
#include <unistd.h>

/**
 * print alphabet - print alphabet in lowercase
 *
 * Description: function printing alphabet in lowercase
 * Return:void
 */
void print_alphabet(void)
{
	char lett;

	for (lett = 97; lett <= 122; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}

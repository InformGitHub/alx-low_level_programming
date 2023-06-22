#include "main.h"
#include <unistd.h>

/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked
 *
 * Description: function
 * Return:1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

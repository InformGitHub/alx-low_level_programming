#include "main.h"
#include <unistd.h>

/**
 * rev_string - returns the length of a string
 *
 * Description: function
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char r  = s[0];
	int count = 0;
	int l;

	while (s[count] != '\0')
	{
		count++;
	}
	for (l = 0; l < count; l++)
	{
		count--;
		r = s[l];
		s[l] = s[count];
		s[count] = r;
	}
}

#include "function_pointers.h"

/**
 * print_name - name's printing
 * @name: name's str
 * @f: printing function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}

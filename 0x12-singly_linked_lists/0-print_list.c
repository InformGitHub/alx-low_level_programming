#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 * Description: function
 * @s: string
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: p
 *
 * Return: s
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}

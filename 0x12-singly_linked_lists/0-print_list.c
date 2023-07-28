#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: p
 *
 * Return: s
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (t)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}

	return (t);
}

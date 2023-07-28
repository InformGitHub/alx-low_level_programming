#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: p
 *
 * Return: s
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}

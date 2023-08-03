#include "lists.h"

/**
  * print_listint - returns the number of elements in a linked listint_t list
  * @h: pointer
  *
  * return: size
  */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}

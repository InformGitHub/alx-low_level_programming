#include "lists.h"

/**
  * print_listint - prints a linked list
  * @h: pointer
  *
  * return: size
  */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}

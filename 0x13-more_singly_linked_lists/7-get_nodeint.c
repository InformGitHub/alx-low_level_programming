#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node
 * @index: index
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int k;

	for (node = head, k = 0; node && k < index; node = node->next)
		k++;
	return (node);
}

#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list.
 * @h: The head of list.
 *
 * Return: The number of elements list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t point= 0;

	while (h)
	{
		point++;
		h = h->next;
	}

	return (point);
}
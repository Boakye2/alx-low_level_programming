#include "lists.h"

/**
 * print_dlistint - Prints all elements.
 * @h: The head of list.
 * Return: The number of nodes .
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t point= 0;

	while (h)
	{
		point++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (point);
}
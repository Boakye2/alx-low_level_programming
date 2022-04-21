#include "lists.h"
/**
 * list_len - give the number of elements in a linked
 * @h: the linked list
 * Return: th e number of elements
 */
size_t list_len(const list_t *h)
{
	size_t el = 0;

	while (h)
	{
		el++;
		h = h->next;
	}
	return (el);
}

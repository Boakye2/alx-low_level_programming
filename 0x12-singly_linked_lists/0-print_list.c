#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all elemnts of list
 * @h: the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node;


	node = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}

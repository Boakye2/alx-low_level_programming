#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the element of a listint_t list
 * @h: the head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t result;

	result = 0;
	while (h)
	{
		result++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (result);
}

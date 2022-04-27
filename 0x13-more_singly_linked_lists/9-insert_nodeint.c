#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - function that insert a new node at the specifque
 * position in the list
 * @head: the head
 * @idx: the index of the list
 * @n: the integer
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}

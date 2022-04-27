#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - function that delete a new node at the specifque
 * position in the list
 * @head: the head
 * @idx: the index of the list
 * Return: the address of the new node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *new, *ptr;
	unsigned int node;

	ptr = *head;
	if (head == NULL)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	new = ptr->next;
	ptr->next = new->next;
	free(new);
	return (1);
}

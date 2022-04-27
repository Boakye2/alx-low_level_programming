#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the nth of  a listint_t list
 * @head: the head
 * @index: index of node
 * Return: the result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = (head)->next;
	}
	return (head);
}

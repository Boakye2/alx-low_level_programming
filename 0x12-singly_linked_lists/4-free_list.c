#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free a linked list
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *el;

	while (head)
	{
		el = head->next;
		free(head);
		head = el;
	}
}


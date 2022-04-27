#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: the head
 * Return: the number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t tmp = head;

	if (head == NULL)
	{
		return;
	}
	head = head->next;
	free(tmp);
	free_listint(head);
}

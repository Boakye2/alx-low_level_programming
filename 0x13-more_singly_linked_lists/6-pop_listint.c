#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * pop_listint - function that the head of  a listint_t list
 * @head: the head
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int result;

	if (*head == NULL)
		return (0);
	ptr = *head;
	result = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (result);
}

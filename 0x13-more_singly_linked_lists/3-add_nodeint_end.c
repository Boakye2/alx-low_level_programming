#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *add_nodeint_end - function that add the new node at the end of list
 * @head: the head
 * @n: the value of node
 * Return: the result
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptrr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptrr = *head;
	if (*head == NULL)
		*head = ptr;
	else
	{
		ptrr = *head;
		while (ptrr->next != NULL)
			ptrr = ptrr->next;
		ptrr->next = ptr;
	}
	return (ptr);
}

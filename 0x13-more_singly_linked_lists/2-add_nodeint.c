#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *add_nodeint - function that add the new node
 * @head: the head
 * @n: the value of node
 * Return: the result
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);

}

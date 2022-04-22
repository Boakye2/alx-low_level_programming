#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node at the end
 * @head: pointer on the head of list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *el;
	int len;
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	el = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		;
	}
	new->str = el;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

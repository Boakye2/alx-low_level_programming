#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at a linked list
 * @head: pointer , to point the head
 * @str: the string
 * Return: the address of the new element , or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;
	char *el;

	len = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	el = strdup(str);
	if (el == NULL)
	{
		free(new);
		return (NULL);
	}

	for (; str[len]; len++)
	{
		;
	}
	new->str = el;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}


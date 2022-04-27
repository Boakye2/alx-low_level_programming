#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * sum_listint - function that return the sum of all data of a listint_t list
 * @head: the head
 * Return: the result
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - function that return the number of elements of listint_t list
 * @h: the head
 * Return: the result
 */
size_t listint_len(const listint_t *h)
{
	size_t result;

	result = 0;
	while (h)
	{
		result++;
		h = h->next;
	}
	return (result);
}

#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a list.
 * @head: The head of the list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int ad = 0;

	while (head)
	{
		ad += head->n;
		head = head->next;
	}

	return (ad);
}

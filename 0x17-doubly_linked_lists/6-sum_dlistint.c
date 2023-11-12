#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all the data (n) in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data, 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != NULL)
	{
		add += temp->n;
		temp = temp->next;  /* Move to the next node */
	}

	return (add);
}


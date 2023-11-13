#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (*head == NULL)  /*Check if the list is empty*/
		return (-1);

	current = *head;

	if (index == 0)  /*Special case: delete the first node*/
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/*Traverse the list to find the node at the specified index*/
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)  /*Index out of bounds*/
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}


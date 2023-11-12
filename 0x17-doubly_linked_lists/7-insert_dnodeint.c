#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the doubly linked list
 * @idx: index where the new node should be added
 * @n: value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (!h || (idx > 0 && !*h))  /*Check if the pointer to the head is valid*/
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));/*Create a new node*/
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)/*Insert at the beginning if index is 0*/
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (i < idx - 1 && current)/*Traverse the list to the desired index*/
	{
		current = current->next;
		i++;
	}

	if (!current && i < idx - 1)/*Check if the index is out of bounds*/
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;/*Connect d new node to the prev and next nodes*/
	new_node->next = current->next;

	if (current->next)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}

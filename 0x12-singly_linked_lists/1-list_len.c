#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of elements in the list
 */


size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

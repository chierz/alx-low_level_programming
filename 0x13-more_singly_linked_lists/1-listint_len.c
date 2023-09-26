#include "lists.h"

/**
 * listint_len - return the length of a linked list
 * @h: pointer to head node
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t  i = 0;
	const listint_t *new = h;
	if (h == NULL)
		return (0);

	while (new != NULL)
	{
		new = new->next;
		i++;
	}
	/*printf("-> %d elements\n", i);*/
	return (i);
}

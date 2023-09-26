#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *new = h;

	while (new)
	{
		i++;
		if (new->n == 0)
			printf("0\n");
		else
			printf("%d\n", new->n);

		new = new->next;
	}

	/**
	 * Commenting out this line as it is not used in this function.
	 * Uncomment if needed.
	 */
	/*printf("-> %d elements\n", i);*/

	return (i);
}


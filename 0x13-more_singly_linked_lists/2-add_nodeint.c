#include "lists.h"

/**
 * addNode - Add a node
 * @new_data: pointer to head node
 * Description: add new node
 * @head_ref: ===
 * Return: Head node
 */
listint_t  *addnode(listint_t **head_ref,
		const int new_data)
{
	/* Allocate memory for new node*/
	listint_t *new_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

/*	if (new_data == NULL)*/
	/*{*/
	/*	free(new_node);*/
	/*	return (NULL);*/
	/*}*/
	/* Assign data to new node*/
	new_node->n = new_data;
	new_node->next = *head_ref;
	/* Set next pointer of new node to NULL as it will be added at the end*/
	/* If the linked list is empty, set the new node as the head of the list*/

	*head_ref = new_node;


	return (*head_ref);
}


/**
 * add_nodeint - return the length of a linked list
 * @head: pointer to head node
 * @n: ======
 * Return: Number of nodes
 */

listint_t *add_nodeint(listint_t **head,
		const int n)
{
	return (addnode(head, n));
}

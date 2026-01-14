#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of list
 * @idx: index where new node should be added (starting at 0)
 * @n: integer value for new node
 *
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* If inserting at index 0, use add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to the node before the insertion point */
	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If we couldn't reach the position, return NULL */
	if (temp == NULL)
		return (NULL);

	/* If inserting at the end, use add_dnodeint_end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;

	/* Update surrounding nodes */
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

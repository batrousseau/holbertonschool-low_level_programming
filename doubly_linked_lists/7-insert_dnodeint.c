#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head pointer of the doubly linked list
 * @idx: index at which to insert the new node, starting from 0
 * @n: value to insert in the new node
 *
 * Return: pointer to the head of the list, or NULL if insertion fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h, *node_before = NULL, *node_end_list = NULL;

	if (*h == NULL) /* Empty list case*/
	{
		if (idx == 0) /* If the index is 0, create the list*/
		{
			return (add_dnodeint_end(h, n));
		} /* If the list is empty and index more than 0, do not insert */
		return (NULL);
	}
	if (idx == 0) /* Special case - Insert at top of the list*/
	{
		return (add_dnodeint(h, n));
	}

	/* Traverse the list to reach the node currently at index idx */
	for (i = 0; i != idx; i++)
	{
		if (tmp->next == NULL)
		{
			/*If I'm right at the end of the list, it's ok*/
			if (i == idx - 1)
			{
			node_end_list = (add_dnodeint_end(h, n));
			return (node_end_list);
			}
			return (NULL); /* If not, insertion is impossible */
		}
		tmp = tmp->next;
	}
	/* Save the node before the insertion point */
	node_before = tmp->prev;
	/* Insert the new node just before the current node at idx */
	tmp = add_dnodeint(&tmp, n);
	/* Link the new node to the previous one */
	tmp->prev = node_before;
	node_before->next = tmp;
	return (tmp);
}

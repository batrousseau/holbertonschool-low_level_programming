#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return the proper node depending
 * on the one you want
 * @head: header of the list
 * @index: position of the wanted node in the list
 * Return: indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *indexed_node = NULL;
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != index; i++)
	{
		tmp = tmp->next;
	}
	indexed_node = tmp;
	if (indexed_node == NULL)
	{
		return (NULL);
	}

	return (indexed_node);
}

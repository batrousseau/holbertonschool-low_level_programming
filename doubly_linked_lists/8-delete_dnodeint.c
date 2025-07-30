#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: head pointer of the list
 * @index: start at 0, node to delete position
 * Return: 1 if sucess, - 1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous_node = NULL;
	dlistint_t *next_node = NULL;
	dlistint_t *tmp = *head;
	unsigned int i = 0;
/* If the list is empty */
if (*head == NULL)
{
	tmp = NULL;
	return (-1);
}
/* If I want to delete first element of the list */
if (index == 0)
{
	*head = tmp->next;
	(*head)->prev = NULL;
	free(tmp);
	return (1);
}

for (i = 0; i != index; i++)
{
	if (tmp->next == NULL) /* When index is going too far*/
	{
		return (-1);
	}
	tmp = tmp->next;
}

/* Let's store previous and next node*/
previous_node = tmp->prev;
if (tmp->next == NULL) /* index is last element of the list case*/
{
	previous_node->next = NULL;
	free(tmp);
	return (1);
}
next_node = tmp->next;
previous_node->next = next_node;
next_node->prev = previous_node;
free(tmp);
return (1);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: head of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	int i = 0;

	if (head == NULL)
	{
		return;
	}
	tmp = head;
	tmp2 = tmp;

	for (i = 0; tmp->next != NULL; i++)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	free(tmp2);
}

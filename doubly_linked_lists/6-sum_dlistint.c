#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the data of an int
 * doubly linked list
 * @head: head of the data
 * Return: sum of all int in all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int i = 0;
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}

	for (i = 0; tmp->next != NULL; i++)
	{
		result = result + tmp->n;
		tmp = tmp->next;
	}
	result = result + tmp->n;

	return (result);
}

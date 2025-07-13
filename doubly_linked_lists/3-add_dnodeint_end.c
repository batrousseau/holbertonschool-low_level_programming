#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end - adding a new node in a
* doubly linked lists
* @head: first node of the list
* @n: int put in each node
* Return: pointer to new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *tmp = *(head);
	int i = 0;

	/* First let's create the node*/
	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
	{
		return (NULL);
	}
	/*No f** worries about memory here since it's already created for and int*/
	last_node->n = n;

	/*First let's deal with first element of the list */
	if (*head == NULL)
	{
		last_node->prev = NULL;
		last_node->next = NULL;
		*head = last_node;

	}
	/*Here we deal with already existing list */
	else
	{
		/* Let's roll through the list to find the last node*/
		for (i = 0; tmp->next != NULL; i++)
		{
			tmp = tmp->next;
		}
		/* When we find the last node, we make the link*/
		tmp->next = last_node;
		last_node->prev = tmp->next;
	}
	return (*head);
}

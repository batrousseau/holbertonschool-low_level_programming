#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_dnodeint - add a new node at the head of a
 * doubly linked list
 * @head: pointer to head pointer
 * @n: the integer into the structure
 * Return: new header of the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_pointer;

	first_pointer = malloc(sizeof(dlistint_t));
	if (first_pointer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	first_pointer->n = n;

	if (*head == NULL)
	{
		*(head) = first_pointer;
		first_pointer->next = NULL;
	}
	else
	{
		(*head)->prev = first_pointer;
		first_pointer->next = *(head);
		*(head) = first_pointer;

	}
	return (*(head));
}


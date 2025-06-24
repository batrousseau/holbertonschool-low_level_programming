#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer to the head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	int i = 0;
	list_t *tmp = head;
	list_t *tmp2 = tmp;

	if(head == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = 0; tmp->next != NULL ; i++)
	{
		tmp2 = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmp2;
	}
	free(tmp2->str);
	free(tmp2);
}



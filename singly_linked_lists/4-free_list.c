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
	list_t *tmp;
	list_t *tmp2;

	if (head == NULL)
	{
		return;
	}
	tmp = head;
	tmp2 = tmp;

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



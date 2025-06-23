#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_lenght - get the number of char in a string
 * @s: string to count
 * Return: Number of char
 */

unsigned int get_lenght(char *s)
{
	unsigned int i = 0;
	unsigned int result = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	result = i;
	return (result);
}



/**
 * add_node_end - create a new nodde at the end of the list
 * @head: pointer to pointer to first node
 * @str: string to integrate into the node
 * Return: content of updated head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_pointer;
	list_t *tmp = *(head);
	int i = 0;

	/* I alloc the space to create a struct dynamically*/
	last_pointer = malloc(sizeof(list_t));

	if (last_pointer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	/* I copy local structure in my dynamic space */
	last_pointer->str = strdup(str);
	if (last_pointer->str == NULL)
	{
		exit(EXIT_FAILURE);
	}
	last_pointer->len = get_lenght(last_pointer->str);
	last_pointer->next = NULL;

	/* Let's study node position*/
	if (*head == NULL && (*head) == NULL)
	{
		/* If it's the last nodde of the list, I don't have any node in following*/
		*head = last_pointer;

	}
	else
	{
		for (i = 0; tmp->next != NULL; i++)
		{
			tmp = tmp->next;
		}
		tmp->next = last_pointer;
	}

	return (*head);
}

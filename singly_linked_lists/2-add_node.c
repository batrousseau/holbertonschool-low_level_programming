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
 * add_node - add a new node at the head of the list
 * @head: pointer to pointer, head of singly linked list
 * @str: string to insert into the new nodde
 * Return: adress of new element of NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	/* I declare local structure and a struct pointer */
	list_t first_nodde;
	list_t *first_pointer;

	first_nodde.str = strdup(str);

	if (first_nodde.str == NULL)
	{
		exit(EXIT_FAILURE);
	}

	/* I alloc the space to create a struct dynamically*/
	first_pointer = malloc(sizeof(list_t));

	if (first_pointer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	/* I copy local structure in my dynamic space */
	first_pointer->str = strdup(first_nodde.str);
	first_pointer->len = get_lenght(first_pointer->str);

	/* Let's study node position*/
	if (head == NULL)
	{
		/* If it's the first nodde of the list, I don't have any node in following*/
		*(head) = first_pointer;
		first_pointer->next = NULL;
	}
	else
	{
		/* If head isn't NULL, I already have an element which become next*/
		first_pointer->next = *(head);
		*(head) = first_pointer;
	}
	return (*(head));
}

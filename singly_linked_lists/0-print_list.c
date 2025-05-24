#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - print all elements of a list
 * @h: head of the linked list
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
int i = 0;
int result = 0;

for (i = 0; h != NULL; i++)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

}

result = i;
return (result);
}

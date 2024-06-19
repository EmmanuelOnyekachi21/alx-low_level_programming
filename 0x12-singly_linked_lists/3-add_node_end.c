#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - Adds new node at the end of the list
 * @head: Points to the head of the node
 * @str: String to be duplicated.
 *
 * Return: address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = NULL;
	list_t *newptr;
	unsigned int counter = 0;
	list_t *temp = *head;

	newptr = malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	counter = strlen(str);

	newptr->len = counter;
	newptr->str = new_str;
	newptr->next = NULL;

	if (*head == NULL)
	{
		*head = newptr;
		return (newptr);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newptr;

	return (newptr);
}

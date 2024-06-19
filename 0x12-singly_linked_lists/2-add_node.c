#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of the linked list.
 *
 * @head: Head pointer to the first node.
 * @str: New String data to be added to list.
 *
 * Return: The address of the new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = NULL;
	unsigned int counter = 0;
	list_t *newptr;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	counter = strlen(str);

	newptr = malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);


	newptr->str = new_str;
	newptr->len = counter;

	newptr->next = *head;
	*head = newptr;

	return (newptr);
}

#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - Entry point
 * Description: adds a new node at the beginning of a dlistint_t list.
 * @head: HEad of the list.
 * @n: New data to be inputted.
 * Return: Returs the address of the new element, else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}

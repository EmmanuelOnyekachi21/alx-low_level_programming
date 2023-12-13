#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Entry point
 * Description: adds a new node at the end of a dlistint_t list.
 * @head: Head to thne list.
 * @n: new data.
 * Return: The address of the new element, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (current->next)
		current = current->next;


	newnode->n = n;
	newnode->next = NULL;
	current->next = newnode;
	newnode->prev = current;

	return (newnode);
}

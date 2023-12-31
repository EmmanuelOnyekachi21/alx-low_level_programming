#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - Entry point.
 *
 * @head: Head
 * @n: Integer
 *
 * Description: adds a new node at the beginning of a listint_t list.
 *
 * Return: Returns address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;
	return ((*head));
}

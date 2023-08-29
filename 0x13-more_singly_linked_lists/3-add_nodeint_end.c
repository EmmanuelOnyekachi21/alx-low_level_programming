#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Entry point
 *
 * @head: Head.
 * @n: Data
 *
 * Description: adds a new node at the end of a listint_t list.
 *
 * Return: Return address.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		(*head) = newnode;
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	return (newnode);
}

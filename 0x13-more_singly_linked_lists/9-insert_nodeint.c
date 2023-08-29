#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Entry point
 *
 * @head: Head
 * @idx: List's index
 * @n: data
 *
 * Description: inserts a new node at a given position.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *prev;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (current)
	{
		if (count == idx && idx != 0)
		{
			prev = current;
			newnode->n = n;
			newnode->next = current->next;
			prev->next = newnode;
		}
		current = current->next;
		count++;
	}
	return (newnode);
}

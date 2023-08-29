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
	listint_t *prev = NULL;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (*head == NULL || newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (current)
	{
		if (count == idx)
		{
			prev->next = newnode;
			newnode->next = current;
			return (newnode);
		}

		prev = current;
		current = current->next;
		count++;
	}
	free(newnode);
	return (NULL);
}

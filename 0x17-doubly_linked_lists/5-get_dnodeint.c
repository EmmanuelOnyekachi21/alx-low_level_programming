#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Entry point
 * Description: returns the nth node of a dlistint_t linked list.
 * @head: Head node.
 * @index: index of the node starting from 0.
 * Return: Return nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}

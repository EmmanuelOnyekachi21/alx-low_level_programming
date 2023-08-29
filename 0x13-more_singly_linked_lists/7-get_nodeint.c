#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Entry point.
 *
 * @head: Head
 * @index: Specifier.
 *
 * Description: returns the nth node of a listint_t linked list.
 *
 * Return: return nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;


	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}

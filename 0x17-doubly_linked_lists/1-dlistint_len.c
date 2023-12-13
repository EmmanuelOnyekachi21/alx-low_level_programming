#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Entry point
 *
 * Description: returns the number of elements in a linked dlistint_t list.
 * @h: Head.
 *
 * Return: Returns num_elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	size_t num_elements = 0;

	current = h;

	if (h == NULL)
		return (0);

	while (current)
	{
		num_elements++;
		current = current->next;
	}

	return (num_elements);
}

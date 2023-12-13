#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Entry point
 *
 * Description: prints all the elements of a dlistint_t list.
 * @h: head
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	size_t nodes = 0;

	current = h;

	if (h == NULL || h->prev != NULL)
		return (0);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}

	return (nodes);
}

#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Entry point
 *
 * @h: Head
 *
 * Description: prints all the elements of a listint_t list.
 *
 * Return: Return nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned long int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

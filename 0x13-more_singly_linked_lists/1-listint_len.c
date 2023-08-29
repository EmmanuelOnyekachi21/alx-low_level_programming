#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Entry point
 *
 * @h: Head
 *
 * Description: returns the number of elements in a linked listint_t list.
 *
 * Return: Returns nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

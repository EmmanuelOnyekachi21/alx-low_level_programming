#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in the linked list
 *
 * @h: Head pointer to the null
 *
 * Return: The number of eleements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

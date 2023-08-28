#include <stdio.h>
#include "lists.h"
/**
 * print_list - Entry point
 *
 * @h: head of linked list
 * Description: prints all the elements of a list_t list
 *
 * Return: Number of nodes in the list printed
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}

	return (count);
}

#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Entry point
 * Description: frees a dlistint_t list.
 * @head: Head node.
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

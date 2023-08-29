#include <stdio.h>
#include "lists.h"
/**
 * free_listint - Entry point.
 *
 * @head: Head.
 *
 * Description: frees a listint_t list.
 *
 * Return: Returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

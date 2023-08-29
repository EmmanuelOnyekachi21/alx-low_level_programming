#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Entry point
 * @head: Head
 * Description: frees a listint_t list.
 *
 * Return: Return nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	(*head) = NULL;
}

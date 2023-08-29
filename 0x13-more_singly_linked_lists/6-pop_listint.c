#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Entry point.
 *
 * @head: Head
 *
 * Description: deletes the head node of a listint_t linked list.
 *
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;

	/* Updates the head pointer to the next node */
	(*head) = (*head)->next;

	free(temp);

	return (data);
}

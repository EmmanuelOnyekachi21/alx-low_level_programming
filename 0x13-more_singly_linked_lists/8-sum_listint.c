#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Entry point.
 *
 * @head: Head
 *
 * Description: returns the sum of all the data (n) of a listint_t linked list.
 *
 * Return: return sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

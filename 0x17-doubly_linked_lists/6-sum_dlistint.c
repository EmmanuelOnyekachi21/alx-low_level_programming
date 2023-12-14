#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Entry point
 * Description: returns the sum of all the data of a dlistint_t linked list.
 * @head: Head node
 * Return: Return sum, else 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

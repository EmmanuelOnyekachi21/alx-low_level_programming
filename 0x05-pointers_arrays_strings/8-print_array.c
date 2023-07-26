#include <stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 *
 * @a: String
 * @n: number of element to be printed.
 *
 * Description: prints n elements of an array of integers
 *
 * Return: Return nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	putchar('\n');
}

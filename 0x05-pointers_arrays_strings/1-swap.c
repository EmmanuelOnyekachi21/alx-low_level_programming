#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 *
 * @a: Pointer 1
 * @b: Pointer 2
 *
 * Description: swaps the values of two integers.
 *
 * Return: Returns nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

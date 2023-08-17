#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Entry point
 *
 * @name: Name.
 * @f: Function pointers.
 *
 * Description: prints a name.
 *
 * Return: Return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}

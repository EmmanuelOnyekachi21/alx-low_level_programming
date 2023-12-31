#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - get funtion
 *
 * @s: pointer to funtion
 *
 * Return: Integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0 && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

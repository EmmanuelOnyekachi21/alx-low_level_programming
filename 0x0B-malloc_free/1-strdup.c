#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 *
 * @str: String to be duplicated.
 *
 * Description: returns a pointer to a newly allocated space in memory..
 *
 * Return: returns a pointer to a new string which is a duplicate of the string
 */

char *_strdup(char *str)
{
	char *ptr;
	int count; /* To get length of string */
	int i; /* Index for copying character into new pointer */


	if (str == NULL)
		return (NULL);

	/* Gets the length of str */
	count = 0;
	while (str[count])
		count++;

	ptr = (char *)malloc(sizeof(char) * (count + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < count)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_digit - Entry point
 *
 * @str: Input strings.
 *
 * Description: checks if character is digit.
 *
 * Return: Return 0 if successful otherwise false.
 */
int check_digit(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

/**
 * main - Entry point
 *
 * @argc: Argument counter.
 * @argv: An array of pointers to strings.
 *
 * Description: adds positive numbers.
 *
 * Return: Return 0 if succesful or 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int *num;

	num = (int *)malloc(sizeof(int) * (argc - 1));

	if (num == NULL)
		return (1);

	for (i = 1; i < argc; i++)
	{
		if (check_digit(argv[i]) != 0)
		{
			puts("Error");
			return (1);
		}
			num[i - 1] = atoi(argv[i]);
	}

	for (i = 0; i < argc - 1; i++)
		sum += num[i];

	printf("%d\n", sum);

	return (0);
}

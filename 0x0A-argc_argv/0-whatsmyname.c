#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * @argc: Counts argumnets
 * @argv: Array of string
 * Description: prints name of program followed by a new line
 *
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}

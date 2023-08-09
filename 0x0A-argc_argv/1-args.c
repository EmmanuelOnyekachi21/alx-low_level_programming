#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Argument counter.
 * @argv: Array of strings.
 *
 * Description: prints the number of arguments passed into it.
 *
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argv;

	argc -= 1;

	printf("%d\n", argc);
	return (0);
}

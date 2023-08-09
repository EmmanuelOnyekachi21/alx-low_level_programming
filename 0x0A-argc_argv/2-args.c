#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Argument counter.
 * @argv: an array of strings.
 *
 * Description: prints all arguments it receives excluding the first one.
 *
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

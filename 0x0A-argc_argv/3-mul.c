#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: Argument counter.
 * @argv: Array of pointers
 * Description: multiplies two numbers.
 *
 * Return: Return 0 if successful.
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if successful
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf("%d", numbers);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	int digit;
	char alphabet;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');

	for (alphabet = 'a'; alphabet < 'g'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}

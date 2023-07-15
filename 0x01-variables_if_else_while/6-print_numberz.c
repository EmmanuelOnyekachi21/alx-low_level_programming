#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 from 0 using putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}

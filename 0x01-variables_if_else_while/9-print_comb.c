#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints combinations of single-digit numbers seperated by ','
 *
 * Return: 0 if successful
 */

int main(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		putchar(counter + '0');
		if (counter != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

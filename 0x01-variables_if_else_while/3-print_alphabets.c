#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints alphabets in lowercase, and then in uppercase.
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alphabet = 'a';
	char uppercase;

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}

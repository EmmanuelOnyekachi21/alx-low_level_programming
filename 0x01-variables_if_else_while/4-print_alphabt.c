#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}

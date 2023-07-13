#include <stdio.h>
#include <unistd.h>

/**
 * main - ENtry point
 * Description: Prints to output without using funx in the NAME section
 * Return: 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}

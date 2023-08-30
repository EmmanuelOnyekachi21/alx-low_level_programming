#include <stdio.h>
#include "main.h"
int str_length(char *s);
int check_palindrome(char *s, int start, int end);
/**
 * is_palindrome - Entry point
 *
 * Description: Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: Returns 1 if palindrome else 0.
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (check_palindrome(s, 0, length - 1));
}
/**
 * str_length - computes the length of string.
 * @s: Input striing.
 * Return: The length of the string.
 */
int str_length(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
/**
 * check_palindrome - Recursively check if a string is a palindrome
 * @s: The input string.
 * @start: The start index.
 * @end: The end index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

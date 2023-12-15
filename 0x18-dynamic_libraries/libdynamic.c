#include "main.h"
#include <unistd.h>
/**
 * _isupper - prints if the characters are lowercase or not
 * 0 for lowercase 1 for uppercase
 * @c: the character being tested
 * Return: 0 for lowercase, 1 for uppercase
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling memory
 * @n: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}

/**
* *_strcat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* Return: returns the dest
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
/**
 * _isdigit - returns if the character is a digit or not
 * @c: the character being tested
 * Return: 1 for a digit, 0 for not a digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _memcpy - copies from the src to the dest
 * @dest: the dest
 * @src: the src
 * @n: the amount to be copied
 * Return: the altered dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}

/**
* *_strncat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* @n: how much of src is being added to dest
* Return: returns the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
/**
 * _atoi - convert string to numbers
 * s: string
 * Return: n
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return sign * result;
}

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL if not found, otherwise s after the character is located
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: always length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strlen_recursion - counts the length of a string
 * @s: the string
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
* *_strncpy - copies the src to dest
* @dest: the destination
* @src: the source being copied
* @n: the amount of info to copy
* Return: Always dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

/**
* _islower  - prints if the characters are lowercase or not
* 0 for not lowercase, 1 for lowercase
* @c: the letter being tested for case
* Return: 0 if not lowercase, 1 if lowercase
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* _puts - prints a string followed by a new line
* @str: the string being printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: The ASCII difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _strspn - finds the length of a prefix substring
 * @s: the string
 * @accept: the characters that are being matched
 * Return: the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *o = accept;
	int len = 0, i, k;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (len != i)
			break;
		for (k = 0; o[k] != '\0'; k++)
		{
			if (p[i] == o[k])
				len++;
		}
	}
	return (len);
}

/**
* _isalpha - returns 1 or 0
* depending on if the character is capitalized or not.
* @c: the character that is looked at.
* Return: Returns 1 if capital, 0 if not.
*/
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: Where the bytes start to be found, or Null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k, pos, Z = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	pos = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[i] == s[k])
			{
				if (k <= pos)
				{
					pos = k;
					Z = 1;
				}
			}
		}
	}
	if (Z == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*haystack == '\0' || *needle == '\0')
		return (0);
	for (; *haystack; haystack++)
	{

	for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
		;
	if (*n == '\0')
		return (haystack);
	}
	return (0);
}

/**
* _abs - returns the absolute value of an integer
* @n: the integer you want the absolute value of
* Return: Returns the absolute value of n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return ((n * -1));
	}
	return (0);
}

/**
 * *_strcpy - copies the string pointed to by src including the terminating
 * null byte \0, to the buffer pointed to by dest.
 * @dest: the buffer
 * @src: string being copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *cpyresult = dest;

	if ((*dest != '\0') && (*src != '\0'))
	{
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (cpyresult);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

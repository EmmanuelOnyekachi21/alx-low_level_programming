# 0x06-pointers_arrays_strings

## Overview
This repository contains C programs and functions related to pointers, arrays, and strings. Each program provides practical examples and exercises to help you understand these concepts better.

## List of Programs
1. **strcat**
   - Prototype: `char *_strcat(char *dest, char *src);`
   - Description: This function concatenates two strings, appending the `src` string to the `dest` string. It overwrites the terminating null byte (`\0`) at the end of `dest` and then adds a terminating null byte. Returns a pointer to the resulting string `dest`.

2. **strncat**
   - Prototype: `char *_strncat(char *dest, char *src, int n);`
   - Description: This function is similar to `strcat`, but it appends at most `n` bytes from `src` to `dest`. The `src` string does not need to be null-terminated if it contains `n` or more bytes. Returns a pointer to the resulting string `dest`.

3. **strncpy**
   - Prototype: `char *_strncpy(char *dest, char *src, int n);`
   - Description: This function copies a string from `src` to `dest`. It copies at most `n` characters from `src` to `dest`. If `src` is less than `n` characters long, the remaining characters in `dest` are filled with null bytes (`\0`) to create a total of `n` characters. Returns a pointer to `dest`.

4. **strcmp**
   - Prototype: `int _strcmp(char *s1, char *s2);`
   - Description: This function compares two strings `s1` and `s2`. It returns an integer less than, equal to, or greater than zero if `s1` is found to be less than, equal to, or greater than `s2`, respectively.

5. **reverse_array**
   - Prototype: `void reverse_array(int *a, int n);`
   - Description: This function reverses the content of an array of integers `a` with `n` elements.

6. **string_toupper**
   - Prototype: `char *string_toupper(char *);`
   - Description: This function changes all lowercase letters of a string to uppercase.

7. **cap_string**
   - Prototype: `char *cap_string(char *);`
   - Description: This function capitalizes all words of a string, where the words are separated by space, tabulation, new line, comma, semicolon, period, exclamation mark, question mark, double quotes, opening parenthesis, or opening curly brace.

8. **leet**
   - Prototype: `char *leet(char *);`
   - Description: This function encodes a string into "1337" language. It replaces specific letters in the string with numbers according to the following rules:
     - Letters 'a' and 'A' are replaced by '4'
     - Letters 'e' and 'E' are replaced by '3'
     - Letters 'o' and 'O' are replaced by '0'
     - Letters 't' and 'T' are replaced by '7'
     - Letters 'l' and 'L' are replaced by '1'

# Variadic Functions

This repository contains solutions for a series of tasks involving variadic functions in the context of the ALX Low-Level Programming curriculum.

## Table of Contents

- [Task 0: Sum of Parameters](#task-0-sum-of-parameters)
- [Task 1: Print Numbers](#task-1-print-numbers)
- [Task 2: Print Strings](#task-2-print-strings)
- [Task 3: Print Anything](#task-3-print-anything)

## Task 0: Sum of Parameters

**Function:** `int sum_them_all(const unsigned int n, ...);`

This function calculates and returns the sum of all its parameters. If the value of `n` is 0, the function returns 0.

Example usage:
```c
int sum = sum_them_all(2, 98, 1024); // Returns 1122

Task 1: Print Numbers

Function: void print_numbers(const char *separator, const unsigned int n, ...);

This function prints a series of numbers followed by a new line. The separator parameter is used to separate the numbers. If separator is NULL, no separator is printed.

Example usage:

print_numbers(", ", 4, 0, 98, -1024, 402); // Prints: 0, 98, -1024, 402

Task 2: Print Strings

Function: void print_strings(const char *separator, const unsigned int n, ...);

This function prints a series of strings followed by a new line. The separator parameter is used to separate the strings. If separator is NULL, no separator is printed. If a string is NULL, (nil) is printed in its place.

Example usage:


print_strings(", ", 2, "Jay", "Django"); // Prints: Jay, Django

Task 3: Print Anything

Function: void print_all(const char * const format, ...);

This function prints a series of values based on the format provided. The format string can contain the following specifiers:

    c: char
    i: integer
    f: float
    s: char* (if the string is NULL, prints (nil))

Example usage:

print_all("ceis", 'B', 3, "stSchool"); // Prints: B, 3, stSchool

How to Compile and Run

Compile the individual task files and the corresponding main files using a C compiler (e.g., gcc). Replace taskX with the actual task file and mainX with the main file for each task.

Example compilation:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 taskX.c mainX.c -o taskX_executable

Run the compiled executable:

./taskX_executable

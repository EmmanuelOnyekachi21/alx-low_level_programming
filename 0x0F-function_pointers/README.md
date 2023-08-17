# C Function Pointers

This repository contains C programs that demonstrate the use of function pointers and related concepts. Each program focuses on a specific task or concept, providing code examples and explanations.

## Table of Contents

1. [What's My Name](#whats-my-name)
2. [If You Spend Too Much Time Thinking](#if-you-spend-too-much-time-thinking)
3. [To Hell With Circumstances](#to-hell-with-circumstances)
4. [A Goal Is Not Always Meant to Be Reached](#a-goal-is-not-always-meant-to-be-reached)

---

## What's My Name

### Description

Write a function that prints a name using different formatting functions.

### Files

- `0-main.c`: Demonstrates the usage of the `print_name` function with different formatting functions.
- `0-print_name.c`: Contains the implementation of the `print_name` function.

---

## If You Spend Too Much Time Thinking

### Description

Write a function that executes a given function on each element of an array.

### Files

- `1-main.c`: Demonstrates the usage of the `array_iterator` function.
- `1-array_iterator.c`: Contains the implementation of the `array_iterator` function.

---

## To Hell With Circumstances

### Description

Write a function that searches for an integer in an array using a comparison function.

### Files

- `2-main.c`: Demonstrates the usage of the `int_index` function with different comparison functions.
- `2-int_index.c`: Contains the implementation of the `int_index` function.

---

## A Goal Is Not Always Meant to Be Reached

### Description

Write a program that performs simple arithmetic operations using function pointers.

### Files

- `3-main.c`: Main function that demonstrates the usage of the arithmetic operations program.
- `3-op_functions.c`: Contains the arithmetic operation functions.
- `3-get_op_func.c`: Contains the `get_op_func` function for selecting the correct operation function.
- `3-calc.h`: Header file containing function prototypes and data structures.

---

## Compilation and Execution

You can compile and execute each program using the provided compilation commands. For example:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a


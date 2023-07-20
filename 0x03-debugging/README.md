# Task 0x03-debugging

## Task Descriptions

1. **Multiple mains** (mandatory)

   In most projects, we often give you only one main file to test with. For this task, you need to create a file named `0-main.c` that tests the `positive_or_negative()` function with a case of 0. You are not coding the solution / function, you’re just testing it!

2. **Like, comment, subscribe** (mandatory)

   Copy the given main file and comment out the part of the code that causes the output to go into an infinite loop. Don’t add or remove any lines of code, just comment out the existing code. Your output should not go into an infinite loop.

3. **0 > 972?** (mandatory)

   This program prints the largest of three integers. However, it is currently giving incorrect output for `a = 972, b = -98, c = 0`. Your task is to fix the code in `2-largest_number.c` so that it correctly prints out the largest of the three numbers.

4. **Leap year** (mandatory)

   This program converts a date to the day of the year and determines how many days are left in the year, taking leap years into consideration. There is an issue with handling leap years. You need to fix the `print_remaining_days()` function so that it gives the correct output for all dates, including leap years.

## Directory Structure

The repository is organized as follows:

- `0-main.c`: Test file for task 1.
- `1-main.c`: Test file for task 2.
- `2-main.c` and `2-largest_number.c`: Test and implementation files for task 3.
- `3-main_a.c`, `3-main_b.c`, `3-convert_day.c`, and `3-print_remaining_days.c`: Test and implementation files for task 4.
- `main.h`: Header file containing function prototypes.

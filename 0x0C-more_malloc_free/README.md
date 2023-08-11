# 0x0C-more_malloc_free

![C](https://img.shields.io/badge/language-C-blue.svg)
![version](https://img.shields.io/badge/version-1.0.0-green.svg)
![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)

## Description

The `0x0C-more_malloc_free` project is part of the low-level programming and algorithm track at Holberton School. This project explores dynamic memory allocation and introduces additional functions for memory management in the C programming language.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [Usage](#usage)
- [Files](#files)
- [Compilation](#compilation)
- [Tests](#tests)
- [Contributing](#contributing)
- [License](#license)

## Requirements

To compile and run the programs in this repository, you need:

- A Unix-like operating system (Ubuntu, Debian, CentOS, macOS, etc.)
- GCC (GNU Compiler Collection)
- [Holberton's custom header file](https://github.com/holbertonschool/_stdio.h/blob/master/_stdio.h)

## Usage

1. Clone the repository using `git clone https://github.com/your_username/0x0C-more_malloc_free.git`
2. Navigate to the project directory: `cd 0x0C-more_malloc_free`
3. Compile the source code using the provided Makefile: `make`
4. Run the compiled program: `./program`

## Files

The following files are present in the repository:

- `holberton.h`: Header file containing function prototypes and struct declarations.
- `0-malloc_checked.c`: Function that allocates memory using `malloc`.
- `1-string_nconcat.c`: Function that concatenates two strings, up to `n` bytes from the second string.
- `2-calloc.c`: Function that allocates memory for an array, using `malloc` and sets the memory to zero.
- `3-array_range.c`: Function that creates an array of integers, with values ranging from `min` to `max`.
- `100-realloc.c`: Function that reallocates a memory block using `malloc` and `free`.
- `101-mul.c`: Program that multiplies two positive numbers and prints the result.
- `main/`: Folder containing main files for testing the functions.

## Compilation

Compile the C files using `gcc`:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g *.c -o program


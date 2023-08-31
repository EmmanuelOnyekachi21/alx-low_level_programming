# 0x14-bit_manipulation

This directory contains C programs that demonstrate various bit manipulation operations. Below are the details of each task:

## Task 0 - binary_to_uint

Converts a binary number to an unsigned int.

### Function Prototype
```c
unsigned int binary_to_uint(const char *b);

Usage Example

c

unsigned int n;

n = binary_to_uint("1");
printf("%u\n", n); // Output: 1

n = binary_to_uint("101");
printf("%u\n", n); // Output: 5

Task 1 - print_binary

Prints the binary representation of a number.
Function Prototype

c

void print_binary(unsigned long int n);

Usage Example

c

print_binary(0);       // Output: 0
print_binary(98);      // Output: 1100010

Task 2 - get_bit

Returns the value of a bit at a given index.
Function Prototype

c

int get_bit(unsigned long int n, unsigned int index);

Usage Example

c

int n;

n = get_bit(1024, 10);
printf("%d\n", n);    // Output: 1

Task 3 - set_bit

Sets the value of a bit to 1 at a given index.
Function Prototype

c

int set_bit(unsigned long int *n, unsigned int index);

Usage Example

c

unsigned long int n = 1024;
set_bit(&n, 5);
printf("%lu\n", n);   // Output: 1056

Task 4 - clear_bit

Sets the value of a bit to 0 at a given index.
Function Prototype

c

int clear_bit(unsigned long int *n, unsigned int index);

Usage Example

c

unsigned long int n = 1024;
clear_bit(&n, 10);
printf("%lu\n", n);   // Output: 0

Task 5 - flip_bits

Returns the number of bits needed to flip to get from one number to another.
Function Prototype

c

unsigned int flip_bits(unsigned long int n, unsigned long int m);

Usage Example

c

unsigned int n = flip_bits(1024, 1);
printf("%u\n", n);   // Output: 2

Repository Information:

    GitHub repository: alx-low_level_programming
    Directory: 0x14-bit_manipulation

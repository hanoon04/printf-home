*This activity has been created as part of the 42 curriculum by <hal-tawa>.*

# ft_printf

## Description
The **ft_printf** project is a reimplementation of a simplified version of the C standard `printf` function.
The goal of this project is to gain a deeper understanding of:
- Variadic functions in C
- Low-level output using the `write` system call
- Parsing and handling formatted strings
- Modular program design under strict constraints

This implementation reproduces the core behavior of `printf` while respecting the rules and limitations of the 42 curriculum.

---

## Supported Conversions
The following format specifiers are supported:

- `%c` — prints a single character  
- `%s` — prints a string  
- `%d` / `%i` — prints a signed integer  
- `%u` — prints an unsigned integer  
- `%x` / `%X` — prints a hexadecimal number (lowercase / uppercase)  
- `%p` — prints a pointer address in hexadecimal  
- `%%` — prints a percent sign  

---

## Instructions

### Compilation
To compile the project, run:
```bash
make

This will generate the static library libftprintf.a.

Usage

Include the header file and link the library in your project:

#include "ft_printf.h"

Example usage:

ft_printf("Number: %d, String: %s, Pointer: %p\n", 42, "Hello", ptr);
Algorithm and Data Structure Explanation
Algorithm

ft_printf iterates through the format string character by character.

If the current character is not %, it is printed directly.

When % is encountered, the next character is treated as a format specifier.

A dispatcher function selects the correct printing function based on the specifier.

Each printing function:

Retrieves the correct argument using va_arg

Prints the value

Returns the number of characters printed

The total number of printed characters is accumulated and returned.

Data Structures

va_list is used to manage variadic arguments.

No additional data structures are required.

Recursive functions are used to print numbers in decimal and hexadecimal formats.

Justification

Using separate functions for each format specifier improves readability and maintainability.

A dispatcher function avoids complex conditional logic inside ft_printf.

Recursion simplifies number conversion while avoiding forbidden standard library functions.

Resources
References

man printf

man stdarg

GNU C Library Documentation

42 Network documentation

Use of AI

AI tools were used as assistance to:

Understand variadic functions and their behavior

Clarify edge cases and common implementation mistakes

Review logic and structure for correctness

All code was written, tested, and fully understood by the author, in compliance with the 42 curriculum rules.

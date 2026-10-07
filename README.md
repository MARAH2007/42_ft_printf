*This activity has been created as part of the 42 curriculum by MARAH2007.*
# ft_printf

> This project is part of the 42 Core Curriculum.

## Description

`ft_printf` is a recreation of the standard C `printf()` function.

The goal of this project is to understand and implement variadic functions in C, while learning how formatted output is processed and how different types of arguments are handled.

The function supports the following conversions:

* `%c` — prints a character
* `%s` — prints a string
* `%p` — prints a pointer address in hexadecimal format
* `%d` — prints a decimal number
* `%i` — prints an integer in base 10
* `%u` — prints an unsigned decimal number
* `%x` — prints a number in lowercase hexadecimal
* `%X` — prints a number in uppercase hexadecimal
* `%%` — prints a percent sign

## Prototype

```c
int ft_printf(const char *format, ...);
```

## Compilation

The project uses a `Makefile`.

Available rules:

```bash
make
make clean
make fclean
make re
```

The compilation flags are:

```bash
-Wall -Wextra -Werror
```

The final static library is:

```text
libftprintf.a
```

## Usage

Include the header:

```c
#include "ft_printf.h"
```

Example:

```c
int main(void)
{
    ft_printf("Hello %s!\n", "Marah");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 42);
    return (0);
}
```

Compile:

```bash
cc main.c libftprintf.a
```

Run:

```bash
./a.out
```

## Variadic Functions

A major part of this project is working with variadic functions.

The function receives a variable number of arguments using:

```c
va_list
va_start
va_arg
va_end
```

These macros allow `ft_printf` to retrieve and process arguments according to the conversion specified in the format string.

## Project Structure

```text
.
├── Makefile
├── README.md
├── ft_printf.h
├── ft_printf.c
├── ft_printchar.c
├── ft_printstr.c
├── ft_printdigit.c
├── ft_printptr.c
├── ft_printhex.c
└── ...
```

## Learning Objectives

Through this project, I learned more about:

* Variadic functions
* `va_list`
* `va_start`
* `va_arg`
* `va_end`
* Function decomposition
* Static libraries
* Makefiles
* Number bases and hexadecimal conversion
* Pointers and memory addresses
* Formatted output
* Return values and counting printed characters

## Allowed Functions

The project uses the functions allowed by the 42 subject, including:

```c
malloc
free
write
va_start
va_arg
va_copy
va_end
```

My `libft` library is also used where allowed.

## Resources

The following resources were useful for understanding the concepts and requirements of this project:

* [42 ft_printf Subject](https://cdn.intra.42.fr/pdf/pdf/154230/en.subject.pdf)
* [C Programming Language — cppreference](https://en.cppreference.com/w/c)
* [printf — cppreference](https://en.cppreference.com/w/c/io/fprintf)
* [stdarg.h — cppreference](https://en.cppreference.com/w/c/variadic)
* [write — man7](https://man7.org/linux/man-pages/man2/write.2.html)
* [GNU C Library — Variadic Functions](https://sourceware.org/glibc/manual/html_node/Variadic-Functions.html)

## AI Usage

AI tools were used as a learning resource to help understand concepts, debug errors, and clarify parts of the project.

The implementation was written and tested as part of my own learning process.

## Author

**Marah Nazzal**

42 Student


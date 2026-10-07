*This activity has been created as part of the 42 curriculum by mnazzal*

# ft_printf

## Description

`ft_printf` is a 42 project that recreates the behavior of the standard C `printf()` function.

The goal of this project is to learn how variadic functions work in C using `va_list`, `va_start`, `va_arg`, and `va_end`, while also practicing string manipulation, number conversion, and formatted output.

## Supported Conversions

This implementation supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal number |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal number |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%%` | Prints a `%` character |

## How It Works

The function checks the format string character by character.

When it finds `%`, it checks the following character to determine which conversion should be used.

For example:

```text
ft_printf("Hello %s!\n", "World");
```

produces:

```text
Hello World!
```

The function also returns the total number of characters that were printed.

## Variadic Arguments

This project uses the `stdarg.h` library to handle a variable number of arguments.

The main tools used are:

```c
va_list
va_start
va_arg
va_end
```

These allow `ft_printf` to receive different types and numbers of arguments depending on the format string.

## Compilation

Compile the project with:

```bash
cc -Wall -Wextra -Werror *.c
```

## Usage

Example:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello");
	ft_printf("Number: %d\n", 42);
	ft_printf("Unsigned: %u\n", 42);
	ft_printf("Hex: %x\n", 255);
	ft_printf("Pointer: %p\n", &main);
	ft_printf("Percent: %%\n");

	return (0);
}
```

## Project Structure

```text
ft_printf/
├── ft_printf.c
├── ft_printf.h
├── ft_printchar.c
├── ft_printdigit.c
├── ft_printp.c
├── ...
└── README.md
```

## Learning Objectives

Through this project, I practiced:

- Variadic functions
- `va_list` and `va_arg`
- Pointers
- Decimal and hexadecimal conversion
- Recursion
- String handling
- File descriptors and `write()`
- Memory and type conversions
- Organizing a C project into multiple files
- Following the 42 Norm

## Author

**Marah Nazzal**

42 School — ft_printf

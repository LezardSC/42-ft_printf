# 42-ft_printf

## Overview

**ft_printf** is a 42 School project that is a custom re-implementation of the standard C `printf` function. It is designed to format and print data to the standard output using a subset of common conversion specifiers. Packaged as a static library (`libftprintf.a`), this project leverages functions from your custom libft for various low-level operations. The implementation handles variadic arguments with `stdarg.h` and splits the work of formatting among several helper functions.

## Supported Conversion Specifiers
The implementation supports the following conversion specifiers:

`%c`: Print a single character.

`%d / %i`: Print a signed decimal integer.

`%u`: Print an unsigned decimal integer.

`%s`: Print a string (null-terminated).

`%x`: Print an unsigned integer in lowercase hexadecimal format.

`%X`: Print an unsigned integer in uppercase hexadecimal format.

`%p`: Print a pointer address.


**Note**: The implementation focuses on these basic specifiers. It does not handle advanced formatting options such as field width, precision, or additional flags (e.g., `0`, `-`, or `#`).

## Features
- **Basic Formatted Output**: Supports a selected group of conversion specifiers for simple output formatting.

- **Variadic Function Handling**: Uses stdarg.h to manage a variable number of arguments.

- **Modular Design**: Each conversion specifier is managed by a dedicated helper function (e.g., ispercent_c for %c, ispercent_d_i for %d/%i, etc.), with a central search_arg function that parses the format string.

- **Integration with libft**: Reuses utility functions from your custom libft for consistency and to simplify development.

- **Static Library**: Compiled into a static library (libftprintf.a), which can be linked into other C projects.

- **Makefile Support**: Comes with a Makefile that automates the compilation, cleaning, and re-compilation processes.

## Testing ft_printf
You can test your implementation with a simple test program. Below is an example:

```C
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Signed integer: %d, %i\n", -123, -123);
    ft_printf("Unsigned integer: %u\n", 123U);
    ft_printf("Lowercase hex: %x, Uppercase hex: %X\n", 255, 255);
    ft_printf("Pointer address: %p\n", (void *)main);
    return (0);
}
```


#### Author

login: jrenault

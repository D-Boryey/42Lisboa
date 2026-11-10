*This project has been created as part of the 42 curriculum by dboryey.*

# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C `printf` function,
developed as part of the 42 Lisboa Common Core curriculum. The goal is to
learn how variadic functions work, parse formatted strings, convert values to
text, and build a reusable static library without relying on the standard
`printf` implementation.

The function writes formatted output to standard output and returns the number
of characters written. This implementation supports the following conversions:

| Conversion | Meaning |
| --- | --- |
| `%c` | A character |
| `%s` | A string, or `(null)` for a null string pointer |
| `%p` | A pointer in hexadecimal notation, or `(nil)` for a null pointer |
| `%d`, `%i` | A signed decimal integer |
| `%u` | An unsigned decimal integer |
| `%x` | An unsigned hexadecimal integer using lowercase digits |
| `%X` | An unsigned hexadecimal integer using uppercase digits |
| `%%` | A literal percent sign |

The result is compiled into the static library `libftprintf.a`.

## Instructions

### Requirements

- A C compiler supporting the project flags, such as `cc` or `clang`.
- GNU Make.
- A POSIX-compatible environment for the `write` system call.

### Compilation

From this directory, build the library with:

```sh
make
```

Other available Make targets are:

```sh
make all     # Same thing as make all because 'all' is the first command
make clean   # Remove object files
make fclean  # Remove object files and the static library
make re      # Clean and rebuild everything
```

### Usage

Include the header and link the generated archive when compiling a program:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Name: %s, score: %d%%\n", "Ada", 42);
	return (0);
}
```

Compile it from the `ft_printf` directory with the include path pointing to
the project directory:

```sh
cc -Wall -Wextra -Werror main.c libftprintf.a -o printf
./printf
```

## Algorithm and Data Structures

`ft_printf` processes the format string from left to right in a single pass.
When it encounters an ordinary character, it writes that character directly.
When it encounters `%`, it reads the following conversion character and sends
the corresponding argument to a dispatcher. The dispatcher selects the
appropriate output routine for characters, strings, pointers, signed numbers,
unsigned numbers, or percent signs.

Every output routine receives a pointer to the same integer counter. Each
successful character write increments this counter, allowing `ft_printf` to
return the total without storing the complete output in memory.

Number conversion uses repeated division by the selected base. The remainder
of each division identifies one digit in a base string such as
`0123456789abcdef`. Since repeated division produces digits from least
significant to most significant, the implementation stores those digits in a
fixed-size local character array and then writes them in reverse order. A
signed value is handled by writing `-` first and converting its magnitude;
unsigned values use the same method without a sign.

This design was chosen because it is small, predictable, and appropriate for
the project constraints:

- The format string is scanned in `O(n)` time, where `n` is its length.
- A number conversion uses `O(d)` time and `O(d)` temporary storage, where
	`d` is the number of digits in the selected base.
- Output is streamed directly with `write`, so the formatted result is not
	duplicated in a large dynamically allocated buffer.
- A dispatcher and shared output counter keep conversion-specific logic
	separate while preserving the `printf` return-value contract.

## Project Structure

- `ft_printf.c` - format-string scan, variadic argument setup, and return count.
- `ft_dispatcher.c` - conversion selection and pointer/unsigned handling.
- `ft_print_chrs.c` - character and string output.
- `ft_putnbr_base.c` - signed and unsigned number conversion.
- `ft_printf.h` - public declarations.
- `Makefile` - build and cleanup rules.

## Resources

- `printf(3)` manual page: https://man7.org/linux/man-pages/man3/printf.3.html
- `stdarg.h` manual page: https://man7.org/linux/man-pages/man0/stdarg.h.0p.html
- `write(2)` manual page: https://man7.org/linux/man-pages/man2/write.2.html
- C standard library reference for formatted output: https://en.cppreference.com/w/c/io/fprintf

AI was used to help organize and edit this README and clarify the explanation of
the parsing and number-conversion algorithms. The implementation itself remains the project code in this repository. no AI was used to build or correct the code.

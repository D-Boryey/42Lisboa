*This project has been created as part of the 42 curriculum by dboryey.*

# get_next_line

## Description

`get_next_line` is a C function that reads and returns one line at a time from
a file descriptor. It was developed as part of the 42 Lisboa Common Core
curriculum. A returned line includes its trailing newline when one is present.

The function has the following interface:

```c
char	*get_next_line(int fd);
```

Each call returns a newly allocated string containing the next line. When there
are no more characters to read, or when an invalid file descriptor is supplied,
the function returns `NULL`. The caller is responsible for freeing every line
returned by the function.

The amount read at a time is controlled by the compile-time `BUFFER_SIZE`
macro. The default value in `get_next_line.h` is `10`, but it can be overridden
when compiling:

```sh
cc -D BUFFER_SIZE=42 ...
```

## Instructions

### Requirements

- A C compiler supporting the project flags, such as `cc` or `clang`.
- GNU Make.
- A POSIX-compatible environment for the `read`, `malloc`, and `free` calls.

### Compilation

From this directory, build the static archive with:

```sh
make
```

Other available Make targets are:

```sh
make all     # Same thing as make because 'all' is the first command
make clean   # Remove object files
make fclean  # Remove object files and the archive
make re      # Clean and rebuild everything
```

The Makefile creates an archive named `get_next_line`. To compile a test
program directly with the implementation, use:

```sh
cc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -o gnl_test
./gnl_test input.txt
```

A typical caller reads until `get_next_line` returns `NULL` and frees each
returned line:

```c
int	fd;
char	*line;

fd = open("input.txt", O_RDONLY);
line = get_next_line(fd);
while (line)
{
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
}
close(fd);
```

## Algorithm and Data Structures

`get_next_line` keeps unread characters in a static pointer named `box`. The
pointer persists between calls, allowing the function to remember characters
that were read after the end of the line currently being returned.

The algorithm processes a call in these steps:

1. Allocate a temporary buffer of `BUFFER_SIZE + 1` bytes.
2. Read a chunk from the file descriptor while `box` does not contain a
	newline and `read` has not reached EOF.
3. Append the new chunk to `box` with `ft_merge`.
4. Copy the first line from `box` into a newly allocated string with
	`ft_get_line`.
5. Remove the returned line from `box` with `ft_update_box`, preserving any
	characters belonging to the next line.
6. Free the temporary read buffer and return the allocated line.

The implementation uses dynamically allocated character arrays rather than a
linked list. `box` owns the unread data, while the returned line is owned by
the caller. When the final line has been returned, or an error occurs, the
remaining `box` allocation is released and the static pointer is reset to
`NULL`.

For a file containing `n` characters, the implementation scans and copies
stored data as it grows, so repeated merging can require more work than a
single linear pass. At any point, the memory used is proportional to the
unread data, the current read buffer, and the returned line. The buffer size
changes the number of system calls and the amount read per call, but not the
function's public behavior.

This design supports one active file descriptor in the mandatory version. The
bonus part extends the function to support several file descriptors at the
same time. It keeps a separate persistent remainder buffer for each descriptor
so calls can be interleaved without mixing the unread data from different
files.

## Project Structure

- `get_next_line.c` - public function and main read/return control flow.
- `get_next_line_utils.c` - newline detection, buffer merging, line extraction,
  remainder management, and reading helpers.
- `get_next_line.h` - `BUFFER_SIZE` definition and public declarations.
- `Makefile` - build and cleanup rules.

## Resources

- `read(2)` manual page: https://man7.org/linux/man-pages/man2/read.2.html
- `open(2)` manual page: https://man7.org/linux/man-pages/man2/open.2.html
- `malloc(3)` manual page: https://man7.org/linux/man-pages/man3/malloc.3.html

AI was used to help organize and edit this README and clarify the explanation of
the parsing and number-conversion algorithms. The implementation itself remains the project code in this repository. no AI was used to build or correct the code.

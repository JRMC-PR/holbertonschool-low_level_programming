# Static Libraries

This directory contains C programs that create and use static libraries.

## Files

- `0-isupper.c`: Contains a function that checks if a character is uppercase.
- `0-memset.c`: Contains a function that fills memory with a constant byte.
- `0-strcat.c`: Contains a function that concatenates two strings.
- `1-isdigit.c`: Contains a function that checks if a character is a digit.
- `1-memcpy.c`: Contains a function that copies memory area.
- `1-strncat.c`: Contains a function that concatenates two strings, using at most n bytes from src.
- `100-atoi.c`: Contains a function that converts a string to an integer.
- `2-strlen.c`: Contains a function that returns the length of a string.
- `2-strchr.c`: Contains a function that locates a character in a string.
- `2-strncpy.c`: Contains a function that copies a string.
- `3-puts.c`: Contains a function that prints a string, followed by a new line, to stdout.
- `3-strspn.c`: Contains a function that gets the length of a prefix substring.
- `4-isalpha.c`: Contains a function that checks if a character is alphabetic.
- `4-strpbrk.c`: Contains a function that searches a string for any of a set of bytes.
- `5-strstr.c`: Contains a function that locates a substring.
- `6-abs.c`: Contains a function that computes the absolute value of an integer.
- `9-strcpy.c`: Contains a function that copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest.
- `libmy.a`: Contains the static library created from the object files.
- `liball.a`: Contains the static library created from the source files.
- `main.c`: Contains the main function for the `libmy.a` program.
- `main.h`: Contains header file declarations for the programs.
- `create_static_lib.sh`: Contains a shell script that creates a static library from the object files.
- `quote`: Contains a file with a quote.
- `README.md`: Contains information about the programs.

## Usage

To use these functions in your own program, create a static library from the object files or source files and link it with your program.

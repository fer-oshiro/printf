*This project has been created as part of the 42 curriculum by fsayuri-*

# Libft

## Summary
* [Description](#description)
* [Instructions](#instructions)
  * [Compilation](#compilation)
* [Usage](#usage)
* [List of Functions](#list-of-functions)
* [Resources](#resources)

## Description
**Libft** is the very first project of the 42 school curriculum. The goal of this project is to recode a set of standard C library functions, as well as other utility functions, to understand how they work under the hood. 

This custom library will be expanded and reused in almost all future C projects throughout the 42 common core (such as *get_next_line*, *ft_printf*, *so_long*, *minishell*, etc.), making efficiency, memory management, and code cleanliness crucial.

---

## Instructions

### Compilation
The project includes a strict 42-compliant Makefile that compiles the source files with the flags -Wall -Werror -Wextra.

#### To compile the mandatory functions:
```bash
make
```

#### To clean up the generated object files (.o):
```bash
make clean
```

#### To remove all object files and the compiled libft.a archive:
```bash
make fclean
```

#### To force a re-compilation of the entire library:
```bash
make re
```

## Usage

To use this library in your own C projects, include the header file in your code and link the static library during compilation:
```c
#include "libft.h"
```

Compile your project along with libft.a:
```c
cc main.c -L. -lft -o my_program
```

## List of Functions

<details>
  <summary><b>1. Functions from libc (ctype, string, stdlib)</b></summary>
  <br>

  * `ft_isalpha` – Checks for an alphabetic character.
  * `ft_isdigit` – Checks for a digit (0 through 9).
  * `ft_isalnum` – Checks for an alphanumeric character.
  * `ft_isascii` – Checks whether c fits into the ASCII character set.
  * `ft_isprint` – Checks for any printable character.
  * `ft_strlen` – Computes the length of a string.
  * `ft_memset` – Fills memory with a constant byte.
  * `ft_bzero` – Erases the data in the n bytes of the memory.
  * `ft_memcpy` – Copies memory area.
  * `ft_memmove` – Copies memory area safely (handles overlap).
  * `ft_strlcpy` – Size-bounded string copying.
  * `ft_strlcat` – Size-bounded string concatenation.
  * `ft_toupper` – Converts a char to uppercase.
  * `ft_tolower` – Converts a char to lowercase.
  * `ft_strchr` – Locates character in string.
  * `ft_strrchr` – Locates character in string (from the end).
  * `ft_strncmp` – Compares two strings up to n bytes.
  * `ft_memchr` – Scans memory for a character.
  * `ft_memcmp` – Compares memory areas.
  * `ft_strnstr` – Locates a substring in a string.
  * `ft_atoi` – Converts a string to an integer.
  * `ft_calloc` – Allocates memory and sets it to zero.
  * `ft_strdup` – Duplicates a string.

</details>

<details>
  <summary><b>2. Additional Functions</b></summary>
  <br>

  * `ft_substr` – Extracts a substring from a string.
  * `ft_strjoin` – Concatenates two strings into a new one.
  * `ft_strtrim` – Trims specific characters from the start and end of a string.
  * `ft_split` – Splits a string into an array of strings using a delimiter.
  * `ft_itoa` – Converts an integer to a string.
  * `ft_strmapi` – Applies a function to each character of a string (creating a new string).
  * `ft_striteri` – Applies a function to each character of a string (in-place).
  * `ft_putchar_fd` – Outputs a character to a file descriptor.
  * `ft_putstr_fd` – Outputs a string to a file descriptor.
  * `ft_putendl_fd` – Outputs a string followed by a newline to a file descriptor.
  * `ft_putnbr_fd` – Outputs an integer to a file descriptor.

</details>

<details>
  <summary><b>3. Linked Lists</b></summary>
  <br>

  * `ft_lstnew` – Creates a new list node.
  * `ft_lstadd_front` – Adds a node at the beginning of the list.
  * `ft_lstsize` – Counts the number of nodes in the list.
  * `ft_lstlast` – Returns the last node of the list.
  * `ft_lstadd_back` – Adds a node at the end of the list.
  * `ft_lstdelone` – Deletes a single node and its content.
  * `ft_lstclear` – Deletes an entire list.
  * `ft_lstiter` – Iterates over a list and applies a function to each node's content.
  * `ft_lstmap` – Creates a new list by applying a function to each node of an existing list.

</details>

## Resources
- C Library Reference (Cplusplus) - Standard documentation for standard libc functions.
- Unix man pages - Detailed specifications for expected behaviors and edge cases.
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/html) - Comprehensive reference guide for core C programming concepts, deep memory handling, and low-level specifications.
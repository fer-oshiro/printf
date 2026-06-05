*This project has been created as part of the 42 curriculum by fsayuri-*

# ft_printf

## Description
The **ft_printf** project is a custom simulation of the function `printf`. The goal of this project is to understand variadic functions in C and master the synchronization of string parsing with output formatting. 

This implementation focuses strictly on the mandatory requirements, handling the following format specifiers:
* `%c` - Prints a single character.
* `%s` - Prints a string of characters.
* `%p` - Prints a void * pointer argument in hexadecimal format.
* `%d` / `%i` - Prints a signed decimal integer.
* `%u` - Prints an unsigned decimal number.
* `%x` - Prints a number in hexadecimal lowercase format.
* `%X` - Prints a number in hexadecimal uppercase format.
* `%%` - Prints a literal percentage sign.

---

## Instructions

### Compilation
To compile the library, clone the repository and run:
```bash
make
```

To create a test file, run:
```bash
make test
```

And execute it with:
```
./tests/test
```

Other Rules

- `make clean`: Removes all intermediate object files (.o).
- `make fclean`: Cleans objects and deletes the compiled .a library and test folders.
- `make re`: Performs a full re-compilation from scratch.

## Resources
### Documentation & References
    Secrets of printf - A deep dive into the inner workings of the original printf layout.
    Variadic Functions in C (gnu.org) - Official GNU documentation for <stdarg.h>.

### Use of AI

AI was utilized as an engineering pair-programmer during the lifecycle of this project.
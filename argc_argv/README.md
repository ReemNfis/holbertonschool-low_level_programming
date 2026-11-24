# C - argc, argv

How a C program receives the words typed on the command line, and how to compile functions that do not use all of their parameters.

## Learning Objectives

- How to use arguments passed to your program
- The two prototypes of `main`, and when to use each one
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Requirements

- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables, no more than 5 functions per file
- Allowed: the standard library
- All prototypes in `main.h`

## Files

| File | Description | How it works |
|---|---|---|
| [`main.h`](./main.h) | Header file | Include guard and the prototype of `_putchar` |
| [`0-whatsmyname.c`](./0-whatsmyname.c) | Prints the name of the program | Prints `argv[0]` as typed, so a renamed program prints its new name; `argc` is marked unused |
| [`1-args.c`](./1-args.c) | Prints the number of arguments passed to the program | Prints `argc - 1`, since `argc` also counts the program name; `argv` is marked unused |

## Syntax

```c
int main(void);
int main(int argc, char *argv[]);
```

`argc` is the number of words on the command line, including the program name. `argv` holds those words as strings: `argv[0]` is the program name and `argv[argc]` is `NULL`.

```c
int argc __attribute__((unused))
(void)argc;
```

Both tell the compiler a parameter is unused on purpose, so `-Wextra -Werror` does not stop the build.

## Usage

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis
```

## Author

Reem - [GitHub](https://github.com/ReemNfis)

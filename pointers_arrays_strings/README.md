# C - Pointers, arrays and strings

Working with **pointers**, **arrays**, and **strings** in C, and rewriting
standard string functions by hand. Each task is one file, and all
prototypes live in `main.h`.

## 🎯 Learning Objectives

- What a pointer is and how to use one
- What arrays are and how pointers and arrays relate
- What a string is and how to manipulate one
- The scope of variables
- How to pass data to a function by address so it can be modified

## 📄 Files

| File | Description | How it works |
|---|---|---|
| [`main.h`](./main.h) | Header file with all function prototypes | Header guard + prototypes, included by every `.c` file |
| [`0-reset_to_98.c`](./0-reset_to_98.c) | `reset_to_98`: sets the integer a pointer points to, to 98 | Writes through the pointer with `*n = 98`, so the caller's variable changes |
| [`0-memset.c`](./0-memset.c) | `_memset`: fills memory with a constant byte | Writes `b` into the first `n` bytes pointed to by `s`, then returns `s` |
| [`0-strcat.c`](./0-strcat.c) | `_strcat`: concatenates two strings | Walks to the end of `dest`, copies `src` from there, and returns `dest` |
| [`1-swap.c`](./1-swap.c) | `swap_int`: swaps the values of two integers | Uses a temporary variable and writes through both pointers |
| [`1-memcpy.c`](./1-memcpy.c) | `_memcpy`: copies a memory area | Copies `n` bytes from `src` to `dest` and returns `dest` |
| [`1-strncat.c`](./1-strncat.c) | `_strncat`: concatenates using at most `n` bytes of `src` | Appends at most `n` bytes, overwriting the null byte of `dest`, then null-terminates |
| [`2-strlen.c`](./2-strlen.c) | `_strlen`: returns the length of a string | Counts characters until the null terminator, which is not counted |
| [`2-strchr.c`](./2-strchr.c) | `_strchr`: locates a character in a string | Returns a pointer to the first `c` in `s`, or `NULL`; `'\0'` returns a pointer to the terminator |
| [`2-strncpy.c`](./2-strncpy.c) | `_strncpy`: copies at most `n` bytes of a string | Pads with null bytes if `src` is shorter than `n`; does **not** null-terminate if `src` is `n` bytes or longer |
| [`3-puts.c`](./3-puts.c) | `_puts`: prints a string followed by a new line | Walks the string and prints each character with `_putchar` |
| [`3-strcmp.c`](./3-strcmp.c) | `_strcmp`: compares two strings | Compares byte by byte and returns the difference of the first pair that differs, or `0` |
| [`3-strspn.c`](./3-strspn.c) | `_strspn`: length of the initial segment made only of accepted bytes | Scans `s` and stops at the first byte that is not in `accept` |
| [`4-print_rev.c`](./4-print_rev.c) | `print_rev`: prints a string in reverse | Finds the length first, then prints backwards from the last character |
| [`4-rev_array.c`](./4-rev_array.c) | `reverse_array`: reverses an array of integers in place | Swaps the first and last elements and moves both indices toward the middle |
| [`4-strpbrk.c`](./4-strpbrk.c) | `_strpbrk`: searches a string for any byte of a set | Returns a pointer to the first byte of `s` that also appears in `accept`, or `NULL` |
| [`5-rev_string.c`](./5-rev_string.c) | `rev_string`: reverses a string in place | Same two-index swap as `reverse_array`, applied to characters |
| [`5-string_toupper.c`](./5-string_toupper.c) | `string_toupper`: converts a string to uppercase | Subtracts 32 (the ASCII gap between cases) from every `'a'`–`'z'`; other characters are untouched |
| [`5-strstr.c`](./5-strstr.c) | `_strstr`: locates a substring | Returns a pointer to the first occurrence of `needle` in `haystack`; an empty `needle` returns `haystack` |
| [`6-puts2.c`](./6-puts2.c) | `puts2`: prints every other character of a string | Advances the index by two on each step |
| [`6-cap_string.c`](./6-cap_string.c) | `cap_string`: capitalizes every word of a string | A word starts after a space, tab, newline, or one of `, ; . ! ? " ( ) { }`; the first letter of each word is uppercased |
| [`7-puts_half.c`](./7-puts_half.c) | `puts_half`: prints the second half of a string | Starts at `(len - 1) / 2 + 1` for odd lengths, at `len / 2` for even ones |
| [`7-leet.c`](./7-leet.c) | `leet`: encodes a string into 1337 | Replaces `a→4`, `e→3`, `o→0`, `t→7`, `l→1` (both cases) using a lookup table, with one `if` and no ternary operator |
| [`7-print_chessboard.c`](./7-print_chessboard.c) | `print_chessboard`: prints an 8×8 board | Prints each of the 8 rows character by character with `_putchar`, followed by a new line |
| [`8-print_array.c`](./8-print_array.c) | `print_array`: prints `n` elements of an array of integers | Elements are separated by `, ` and followed by a new line |
| [`8-print_diagsums.c`](./8-print_diagsums.c) | `print_diagsums`: prints the sums of both diagonals of a square matrix | The matrix is flattened row-major, so element (i, j) is `a[i * size + j]`; the main and anti-diagonals are summed and printed separated by `, ` |
| [`9-strcpy.c`](./9-strcpy.c) | `_strcpy`: copies a string into a buffer | Copies every character including the null terminator, and returns `dest` |
| [`100-atoi.c`](./100-atoi.c) | `_atoi`: converts a string to an integer | Skips leading non-digit characters, tracks every `-` to decide the sign, and builds the number digit by digit |

## ⚙️ Requirements

- Compiled on Ubuntu 20.04 LTS with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
```

- Betty style
- Printing with `_putchar` only, unless a task states otherwise
- All prototypes in `main.h`
- `100-atoi.c` is also tested with `-fsanitize=signed-integer-overflow`

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

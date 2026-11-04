# C - More functions, more nested loops

More practice writing **functions** and **nested loops** in C, printing with `_putchar` only.

## 🎯 Learning Objectives

- What nested loops are and how to use them
- What a function is and how to use it
- The difference between a declaration and a definition of a function
- What a prototype is
- Scope of variables
- The purpose of the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What header files are and how to use them with `#include`

## 📄 Files

| File | Description | How it works |
|---|---|---|
| [`main.h`](./main.h) | Header file with all function prototypes | Header guard (`#ifndef MAIN_H`) + prototypes, included by every `.c` file with `#include "main.h"` |
| [`0-isupper.c`](./0-isupper.c) | `_isupper`: checks for an uppercase character | Returns `1` if `c` is between `'A'` and `'Z'` (ASCII 65 to 90), `0` otherwise |
| [`1-isdigit.c`](./1-isdigit.c) | `_isdigit`: checks for a digit (`0` through `9`) | Returns `1` if `c` is between `'0'` and `'9'` (ASCII 48 to 57), `0` otherwise |
| [`2-mul.c`](./2-mul.c) | `mul`: multiplies two integers | Returns `a * b` directly; negative numbers work without any extra check |
| [`3-print_numbers.c`](./3-print_numbers.c) | `print_numbers`: prints the numbers `0` to `9`, then a new line | A `char` goes from `'0'` to `'9'` in a `while` loop; `_putchar` is used only twice: one inside the loop, one for `'\n'` |
| [`4-print_most_numbers.c`](./4-print_most_numbers.c) | `print_most_numbers`: prints the numbers `0` to `9` except `2` and `4`, then a new line | Same loop as `print_numbers`; an `if` with `!=` and `&&` skips `'2'` and `'4'` before `_putchar`, while `a++` always runs |
| [`5-more_numbers.c`](./5-more_numbers.c) | `more_numbers`: prints 10 times the numbers `0` to `14`, then a new line | Nested loops: outer runs 10 times, inner goes 0–14; the tens digit (`a / 10`) is printed only if `a > 9`, the ones digit (`a % 10`) always, each with `+ '0'` |
| [`6-print_line.c`](./6-print_line.c) | `print_line`: draws a straight line of `n` underscores, then a new line | A `while (i < n)` loop prints `_`; if `n <= 0` the loop never runs, so only `'\n'` is printed (no extra `if` needed) |
| [`7-print_diagonal.c`](./7-print_diagonal.c) | `print_diagonal`: draws a diagonal line of `n` backslashes | Nested loops: line `i` prints `i` spaces, then `'\\'` and `'\n'`; if `n <= 0`, only `'\n'` is printed, checked before the loop |
| [`8-print_square.c`](./8-print_square.c) | `print_square`: prints a square of `#`, then a new line | Nested loops: `size` lines of `size` `#` each, every line ending with `'\n'`; if `size <= 0`, only `'\n'` is printed |
| [`9-fizz_buzz.c`](./9-fizz_buzz.c) | Program: prints `1` to `100`, with `Fizz` for multiples of 3, `Buzz` for multiples of 5, `FizzBuzz` for both | Checks `i % 3 == 0 && i % 5 == 0` first, then `% 5`, then `% 3`; a space follows every item except `100`; uses `printf` (standard library allowed in this task) |

## ⚙️ Requirements

- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style
- No standard library: printing with `_putchar` only
- No global variables, no more than 5 functions per file
- All prototypes in `main.h`

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

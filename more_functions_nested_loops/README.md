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

## ⚙️ Requirements

- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style
- No standard library: printing with `_putchar` only
- No global variables, no more than 5 functions per file
- All prototypes in `main.h`

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

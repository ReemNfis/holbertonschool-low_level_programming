# C - Variables, if, else, while

Working with **variables**, **operators**, **conditions**, and **loops** in C.

## 🎯 Learning Objectives

- Arithmetic, relational, and logical operators
- What values are TRUE and FALSE in C
- How to use `if`, `if ... else`
- How to declare and assign `char`, `int`, `unsigned int`
- How to print variables with `printf`
- How to use the `while` loop
- What the ASCII character set is
- The purpose of the `gcc` flags `-m32` and `-m64`

## 📄 Files

| File | Description | How it works |
|---|---|---|
| `0-positive_or_negative.c` | Prints whether a random number is **positive**, **negative**, or **zero** | `if` / `else if` / `else` compares `n` with `0`, then `printf("%d is ...\n", n)` prints the number and its sign |
| `1-last_digit.c` | Prints the **last digit** of a random number and compares it to 5 and 0 | `n % 10` gives the last digit (negative for negative `n`), then `if` / `else if` / `else` picks the message |
| `2-print_alphabet.c` | Prints the **lowercase alphabet**, followed by a new line | A `char` starts at `'a'`; a `while` loop calls `putchar` and increments it until `'z'` (letters are consecutive ASCII codes), then one `putchar('\n')` |
| `3-print_alphabets.c` | Prints the alphabet in **lowercase**, then in **uppercase**, followed by a new line | Two consecutive `while` loops reuse one `char`: `'a'`→`'z'`, then reset to `'A'`→`'Z'`; one `putchar('\n')` at the end |
| `4-print_alphabt.c` | Prints the lowercase alphabet **except `q` and `e`**, followed by a new line | A `while` loop from `'a'` to `'z'`; `if (letter == 'e' \|\| letter == 'q')` skips them with `continue` |
| `5-print_numbers.c` | Prints all **single digit numbers** of base 10 from `0`, followed by a new line | An `int` counter goes from `0` to `9`; `putchar(number + '0')` turns each digit into its ASCII character |
| `6-print_numberz.c` | Prints all single digit numbers from `0` with `putchar` only and **no `char` variables** | An `int` counter `0`→`9`; `putchar(number + '0')` converts each digit to its ASCII character |
| `7-print_tebahpla.c` | Prints the lowercase alphabet **in reverse**, followed by a new line | A `char` starts at `'z'`; the loop runs while `letter >= 'a'` and decrements with `letter--` |
| `8-print_base16.c` | Prints all the numbers of **base 16** in lowercase, followed by a new line | Two loops over two separate ASCII ranges: `'0'`→`'9'`, then `'a'`→`'f'`; one `putchar('\n')` at the end |
| `9-print_comb.c` | Prints all single-digit numbers separated by `, ` in ascending order | An `int` counter `0`→`9`; `putchar(number + '0')` every time, and `', '` only `if (number != 9)` |


## 🧩 Syntax

| Concept | Syntax |
|---|---|
| `if` / `else if` / `else` | `if (cond) ... else if (cond2) ... else ...` |
| Print an `int` | `printf("%d\n", n);` |
| Last digit of a number | `n % 10` |
| `while` loop | `init; while (condition) { body; update; }` |
| Print one character | `putchar(c);` |
| Digit → character / character → digit | `n + '0'` · `c - '0'` |
| Count down | `x = end; while (x >= start) { ...; x--; }` |
| Hexadecimal literal / print as hex | `0x1f` · `printf("%x", n);` |
| Separator, except after the last item | `print(item); if (item != last) print(sep);` |

## ⚙️ Requirements

- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style
- No use of `system`
- All files end with a new line

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

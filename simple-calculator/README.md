# Simple Calculator

A terminal-based interactive calculator written in C.
It prints a menu, reads a choice, prompts for two operands,
performs the selected arithmetic operation, and repeats until
the user quits.

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

The program compiles with no warnings under these flags.

## Usage

```
./calculator
```

Example session:

```
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 4
A: 10
B: 4
Result: 2.5
Choice: 0
Bye!
```

## Supported Operations

| Option | Operation      | Status      |
|--------|----------------|-------------|
| 1      | Addition       | implemented |
| 2      | Subtraction    | implemented |
| 3      | Multiplication | implemented |
| 4      | Division       | implemented |
| 0      | Quit           | implemented |

## Numeric Behavior

All operands and results are double-precision floating point
values (`double`). Division therefore yields a decimal result:
`10 / 4` gives `2.5`, not `2`.

Results are printed with up to 15 significant digits and no
trailing zeros. Very large or very small values are shown in
scientific notation (for example `1e+20`).

Division by zero is detected before the operation is performed
and reported as `Error: division by zero`. The program returns
to the menu instead of terminating.

## Known Limitations

- Menu choices outside the range `0-4` are rejected with
  `Invalid choice`.
- Non-numeric menu input (for example `x`, `hello`) is also
  reported as `Invalid choice`; the input buffer is cleared
  before the next prompt, so the program does not loop
  indefinitely.
- Non-numeric operand input is reported as `Invalid input` and
  the operation is cancelled; the program returns to the menu.
- Mixed input such as `10abc` is parsed up to the first invalid
  character, and the remainder is consumed by the next read.
- Division by a value too small to represent (for example
  `1e-320`) overflows and prints `inf` rather than an error.
- End of input (EOF) terminates the program with `Bye!`.

## Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

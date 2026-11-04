# Debugging Visualization with Python Tutor

Finding and fixing **logic errors** in C by **tracing execution step by step** with [Python Tutor's C visualizer](https://pythontutor.com/c.html).

## 🎯 Learning Objectives

- What debugging is and why step-by-step tracing is necessary
- How to use Python Tutor to:
  - execute C code line by line
  - inspect variable values at each step
  - follow loop and nested loop execution
  - observe how functions are called and return values
- How to identify and fix common logic errors:
  - off-by-one loop conditions
  - incorrect loop control variables
  - improper variable updates
  - incorrect use of function return values

## 📄 Files

| File | Description | How it works |
|---|---|---|
| [`sum_to_n.c`](./sum_to_n.c) | `sum_to_n`: returns the sum of all integers from `1` to `n` | `sum` starts at `n`, then the `for` loop adds every `i` from `1` to `n - 1`, and the function returns `sum` (`sum_to_n(10)` → `55`). **Bugs fixed:** the function returned `n` instead of `sum`, and the loop condition `i < n` never added `n` itself, which is now covered by initializing `sum` to `n` |

## 🔍 Debugging Workflow

1. **Expected vs actual:** write down the expected output, run the program, compare
2. **Predict:** before each step, predict the next value of the suspect variable
3. **Trace:** step through the code in Python Tutor and watch the variables in the stack frame
4. **First divergence:** stop at the first step where the actual value differs from the prediction
5. **Minimal fix:** change only what causes the bug, then recompile and trace again

## 🧩 Syntax

| Concept | Syntax |
|---|---|
| Compile with the project flags | `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 file.c -o file` |
| Check the exact output (`$` marks each end of line) | `./file \| cat -e` |
| Loop iteration count | `for (i = a; i < b; i++)` → `b - a` times · `for (i = a; i <= b; i++)` → `b - a + 1` times |
| Accumulator pattern | `sum = 0;` before the loop, `sum += value;` inside it |
| Use a function's return value | `x = f(x);` or `printf("%d\n", f(x));` (a bare `f(x);` discards the result) |
| C89 declarations | all variables declared at the top of the block, no `for (int i = ...)`, comments with `/* */` only |

## 🛠️ Tools

| Tool | Use |
|---|---|
| [Python Tutor — C](https://pythontutor.com/c.html) | Visualize execution: green arrow = line just executed, red arrow = next line to execute |
| `gcc` | Final check: Python Tutor accepts newer C, the checker compiles with `-std=gnu89` |
| [`multiplication_table.c`](./multiplication_table.c) | `print_table`: prints the multiplication table from `1` to `size` | Nested loops: `row` and `col` each run from `1` to `size`, printing `row * col` followed by a space, then `\n` after each row. **Bug fixed:** an extra `col++` inside the inner loop body incremented `col` twice per iteration, skipping every other column |

## ⚙️ Requirements

- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Allowed: variables, `if` / `else`, `for` / `while` loops, nested loops, functions
- Not allowed: pointers, arrays, structs, dynamic memory, file I/O
- Output must match exactly, including spaces and new lines
- Function names, file names, and `main` must not be changed

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

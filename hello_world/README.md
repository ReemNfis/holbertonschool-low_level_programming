# C - Hello, World

First steps in **C**: how source code becomes an executable program,
and how to print text to the screen.

## 🎯 Learning Objectives

- What happens when you type `gcc main.c`
- What `main` and the entry point are
- How to print with `printf`, `puts`, and `putchar`
- How to get a type's size with `sizeof`
- How to compile with `gcc` (default output: `a.out`)
- How to check code style with `betty`

## 🔄 Compilation Steps

```
main.c → Preprocessor → Compiler → Assembler → Linker → a.out
```

## 🛠️ gcc Options

| Option | Stops after | Syntax |
|---|---|---|
| `-E` | Preprocessor | `gcc -E file.c -o output` |
| `-c` | Assembler (no linking) | `gcc -c file.c` → `file.o` |
| `-S` | Compiler (assembly code) | `gcc -S file.c` → `file.s` |
| `-o name` | — (sets the output name) | `gcc file.c -o name` |


## 🖨️ Printing Functions

| Function | Prints | Adds `\n`? | Header |
|---|---|---|---|
| `puts(s)` | a string |  yes | `<stdio.h>` |
| `printf(format, ...)` | formatted text |  no — add `\n` | `<stdio.h>` |


## 📄 Files

| File | Description | How it works |
|---|---|---|
| `0-preprocessor` | Runs a C file through the **preprocessor** only | `gcc -E $CFILE -o c` — `-E` stops after preprocessing, `-o c` saves the result in `c` |
| `1-compiler` | Compiles a C file **without linking** | `gcc -c $CFILE` — stops after assembly and creates `name.o` automatically |
| `2-assembler` | Generates the **assembly code** of a C file | `gcc -S $CFILE` — stops after compilation and creates `name.s` automatically |
| `3-name` | Compiles a C file into an executable named **`cisfun`** | `gcc $CFILE -o cisfun` — runs all 4 stages; `-o` replaces the default name `a.out` |
| `4-puts.c` | Prints a sentence using **`puts`** | `puts()` prints the string + adds `\n` automatically; `\"` prints a literal `"` |
| `5-printf.c` | Prints a sentence using **`printf`** | `printf()` does **not** add a new line, so the string ends with `\n` |

## ⚙️ Requirements

- C files: compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`, Betty style
- Shell scripts: exactly 2 lines, first line `#!/bin/bash`
- All files end with a new line

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

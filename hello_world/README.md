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

## 📄 Files

| File | Description | How it works |
|---|---|---|
| `0-preprocessor` | Runs a C file through the **preprocessor** only | `gcc -E $CFILE -o c` — `-E` stops after preprocessing, `-o c` saves the result in `c` |

## ⚙️ Requirements

- C files: compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`, Betty style
- Shell scripts: exactly 2 lines, first line `#!/bin/bash`
- All files end with a new line

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

# C - Function pointers

Learning how to store the address of a function in a pointer and pass it to other functions (callbacks).

## Learning Objectives

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Requirements

- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables, no more than 5 functions per file
- Allowed functions: `malloc`, `free`, `exit`, `_putchar`
- All prototypes in `function_pointers.h`

## Files

| File                                           | Description                                                       | How it works                                                                                                                                         |
| ---------------------------------------------- | ----------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| [`function_pointers.h`](./function_pointers.h) | Header file                                                       | Include guard, `stddef.h` and the prototypes of all the functions                                                                                    |
| [`0-print_name.c`](./0-print_name.c)           | `print_name`: prints a name using a given function                | Calls `f(name)`; does nothing if `name` or `f` is `NULL`                                                                                             |
| [`1-array_iterator.c`](./1-array_iterator.c)   | `array_iterator`: executes a function on each element of an array | Loops over the array and calls `action` on each element; does nothing if `array` or `action` is `NULL`                                               |
| [`2-int_index.c`](./2-int_index.c)             | `int_index`: searches for an integer in an array                  | Returns the index of the first element for which `cmp` does not return `0`; returns `-1` if none matches, `size <= 0`, or `array` or `cmp` is `NULL` |

## Syntax

```c
return_type (*name)(arg_types);
```

Declares `name` as a pointer to a function that takes `arg_types` and returns `return_type`. It holds the address of the function's first instruction, in the code (text) segment.

## Usage

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_name.c -o 0-print_name
./0-print_name
```

## Author

Reem - [GitHub](https://github.com/ReemNfis)

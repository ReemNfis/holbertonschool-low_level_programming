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
- Allowed functions: `malloc`, `free`, `exit`, `_putchar` (task 3: the standard library)
- All prototypes in `function_pointers.h`

## Files

| File                                           | Description                                                           | How it works                                                                                                                                                                      |
| ---------------------------------------------- | --------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [`function_pointers.h`](./function_pointers.h) | Header file                                                           | Include guard, `stddef.h` and the prototypes of all the functions                                                                                                                 |
| [`0-print_name.c`](./0-print_name.c)           | `print_name`: prints a name using a given function                    | Calls `f(name)`; does nothing if `name` or `f` is `NULL`                                                                                                                          |
| [`1-array_iterator.c`](./1-array_iterator.c)   | `array_iterator`: executes a function on each element of an array     | Loops over the array and calls `action` on each element; does nothing if `array` or `action` is `NULL`                                                                            |
| [`2-int_index.c`](./2-int_index.c)             | `int_index`: searches for an integer in an array                      | Returns the index of the first element for which `cmp` does not return `0`; returns `-1` if none matches, `size <= 0`, or `array` or `cmp` is `NULL`                              |
| [`3-calc.h`](./3-calc.h)                       | Header file for the calculator                                        | Include guard, the `op_t` struct (operator + function pointer) and the prototypes                                                                                                 |
| [`3-op_functions.c`](./3-op_functions.c)       | `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`: the five operations | Each returns the result of one operation on `a` and `b`                                                                                                                           |
| [`3-get_op_func.c`](./3-get_op_func.c)         | `get_op_func`: selects the function that matches an operator          | Walks the `ops` table until the `{NULL, NULL}` end; returns the matching `f`, or `NULL`                                                                                           |
| [`3-main.c`](./3-main.c)                       | `main`: performs `calc num1 operator num2`                            | Converts with `atoi`, calls the function returned by `get_op_func`; prints `Error` and exits with `98` (wrong argument count), `99` (unknown operator) or `100` (division by `0`) |

## Syntax

```c
return_type (*name)(arg_types);
```

Declares `name` as a pointer to a function that takes `arg_types` and returns `return_type`. It holds the address of the function's first instruction, in the code (text) segment.

```c
int (*get_op_func(char *s))(int, int);
```

Read from the name outward: a function that takes `char *` and returns a pointer to a function that takes `(int, int)` and returns `int`.

## Usage

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_name.c -o 0-print_name
./0-print_name

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1024 '*' 98
```

## Author

Reem - [GitHub](https://github.com/ReemNfis)

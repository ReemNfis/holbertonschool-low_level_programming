# C - More malloc, free

This project covers dynamic memory allocation in C: how to stop a program
with `exit`, and how `calloc` and `realloc` extend `malloc` and `free`.

## Requirements

- Editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables, no more than 5 functions per file
- Allowed standard library functions: `malloc`, `free`, `exit`

## Files

| File | Purpose | Explanation |
|------|---------|-------------|
| `main.h` | Header file | Holds the prototypes of all the functions of the project, with an include guard |
| `0-malloc_checked.c` | Task 0 - Trust no one | `malloc_checked` calls `malloc`; if it returns `NULL`, `exit(98)` ends the whole program, otherwise the pointer is returned |
| `1-string_nconcat.c` | Task 1 - string_nconcat | `string_nconcat` allocates a new string with `s1` followed by the first `n` bytes of `s2` (all of `s2` if `n` is larger), null terminated; `NULL` inputs are treated as `""`; returns `NULL` if `malloc` fails |
| `2-calloc.c` | Task 2 - _calloc | `_calloc` allocates `nmemb * size` bytes with `malloc` and sets every byte to `0`; returns `NULL` if `nmemb` or `size` is `0`, or if `malloc` fails |
| `3-array_range.c` | Task 3 - array_range | `array_range` allocates an array of `int` holding every value from `min` to `max` (both included) in order; returns `NULL` if `min > max` or if `malloc` fails |

## Functions

### `exit`

```c
#include <stdlib.h>
void exit(int status);
```

Ends the whole program immediately, from any function. `status` is the
exit status: `0` means success, any other value means an error. It can be
read in the shell with `echo $?`.

### `malloc`

```c
#include <stdlib.h>
void *malloc(size_t size);
```

Allocates `size` bytes and returns a pointer to them, or `NULL` on failure.
The memory is not initialized and must be released with `free`.

## Usage

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
echo $?
```

## Author

Reem Alnafisa - [GitHub](https://github.com/ReemNfis)

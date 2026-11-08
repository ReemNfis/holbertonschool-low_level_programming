# Algorithmic Efficiency Comparison

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long comparison_algorithms.c -o comparison_algorithms
```

## Raw output

### Run 1

```
Naive algorithm result: 625025000
Naive algorithm time: 2.288626 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000082 seconds
```

### Run 2

```
Naive algorithm result: 625025000
Naive algorithm time: 2.325956 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000082 seconds
```

### Run 3

```
Naive algorithm result: 625025000
Naive algorithm time: 2.358434 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000089 seconds
```

## Execution times

| Run | Naive (s) | Single-pass (s) |
|-----|-----------|-----------------|
| 1 | 2.288626 | 0.000082 |
| 2 | 2.325956 | 0.000082 |
| 3 | 2.358434 | 0.000089 |
| **Average** | **2.324339** | **0.000084** |

- Naive average: (2.288626 + 2.325956 + 2.358434) / 3 = 2.324339 s
- Single-pass average: (0.000082 + 0.000082 + 0.000089) / 3 = 0.000084 s

## Relative difference

2.324339 / 0.000084 ≈ 27,561

**The naive implementation is ~27,500 times slower than the single-pass implementation.**

## Analysis

- **Naive: O(n²).** For every `i`, the inner loop goes back over `data[0]` to `data[i]`, so it makes n(n + 1) / 2 = 1,250,025,000 checks for n = 50,000.
- **Single-pass: O(n).** It checks each element once: 50,000 checks.
- The naive version does about 25,000 times more work, which matches the measured ~27,500 times difference.
- **Results differ:** the naive version prints 625025000 and the single-pass version prints 25000. The naive inner loop counts the even numbers of every prefix again and again, so it does not return the number of even values in the array.
- **Noise:** the naive times vary by about 3% between runs. The single-pass time is close to the timer's resolution, so its relative noise is larger.

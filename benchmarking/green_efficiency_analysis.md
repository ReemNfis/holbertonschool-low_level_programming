# Green Efficiency Analysis

Author: Reem Alnufaisi ([ReemNfis](https://github.com/ReemNfis))

## Measurement Methodology

All programs ran on one machine (Ubuntu on WSL), compiled with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long <file>.c -o <program>
```

- **Tool:** `clock()` from `<time.h>`. It returns CPU time, not wall-clock time. Each duration is `(double)(end - start) / CLOCKS_PER_SEC`.
- **Runs:** three consecutive runs per program, recorded verbatim.
- **Statistic:** the average of the runs.
- **Boundaries in `instrumentation_lab.c`:** each phase has its own `start` and `end` readings placed directly around its function call. `TOTAL` starts before the first phase and ends after the checksum check. All `printf` calls come after the last reading, so printing is never measured.

## Observed Performance Differences

### 1. Baseline loop (100,000,000 iterations)

| Run | Time (s) |
|-----|----------|
| 1 | 0.237188 |
| 2 | 0.202210 |
| 3 | 0.197670 |
| **Average** | **0.212356** |

The same deterministic code gave three different times. Runs 2 and 3 are within 2.3% of each other, while run 1 is about 19% slower than their average. This matches a warm-up effect: the first run starts with cold caches.

### 2. Naive vs single-pass counting (50,000 elements)

| Run | Naive (s) | Single-pass (s) |
|-----|-----------|-----------------|
| 1 | 2.288626 | 0.000082 |
| 2 | 2.325956 | 0.000082 |
| 3 | 2.358434 | 0.000089 |
| **Average** | **2.324339** | **0.000084** |

The naive implementation is **~27,500 times slower** (2.324339 / 0.000084). The cause is the algorithm:

- **Naive, O(n²):** the inner loop rescans `data[0..i]` for every `i`, which is n(n + 1) / 2 = 1,250,025,000 checks.
- **Single-pass, O(n):** 50,000 checks.

The work ratio is about 25,000, close to the measured ratio. The two results also differ (625025000 vs 25000): the naive version counts the even values of every prefix, not of the array once.

### 3. Instrumented phases

| Run | TOTAL (s) | BUILD_DATA (s) | PROCESS (s) | REDUCE (s) |
|-----|-----------|----------------|-------------|------------|
| 1 | <TOTAL_1> | <BUILD_1> | <PROCESS_1> | <REDUCE_1> |
| 2 | <TOTAL_2> | <BUILD_2> | <PROCESS_2> | <REDUCE_2> |
| 3 | <TOTAL_3> | <BUILD_3> | <PROCESS_3> | <REDUCE_3> |

In every run, `TOTAL` is greater than or equal to each phase. The slowest phase was <PHASE>.

## Relation Between Runtime and Energy Consumption

Energy = Power × Time. This experiment did not measure power, so runtime is used as a proxy: longer CPU time usually means longer CPU activity and more energy.

Across the three runs, the naive algorithm kept the CPU busy for 6.973016 s in total, while the single-pass algorithm used 0.000253 s for the same input. If power is similar in both cases, the naive version needs about 27,500 times more energy for one count.

## Limitations of the Experiment

- **No power measurement:** energy is inferred from runtime, not measured in watts.
- **Few runs:** three runs per program cannot show the full range of noise.
- **Timer resolution:** the single-pass and phase times are below one millisecond, so small noise changes them by a large percentage.
- **Different results:** the two counting functions do not return the same value, so the comparison measures cost, not two correct answers to one question.
- **One machine:** other hardware would give different seconds.

## Practical Engineering Takeaway

1. **Choose the algorithm first.** Changing O(n²) to O(n) reduced CPU time by ~27,500 times on the same machine.
2. **Check correctness before speed.** A faster function with a different result is not a valid replacement.
3. **Measure more than once.** Run 1 of the baseline was 19% slower than the others; one run alone would have misled.
4. **Instrument inside the code** to see which phase uses the time, and keep printing outside the measured region.

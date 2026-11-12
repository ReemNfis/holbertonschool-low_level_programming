# Benchmarking and Green Efficiency

Measuring the **CPU cost** of C programs with `clock()`, and comparing
algorithms that produce the same result at very different prices.

## 🎯 Learning Objectives

- How to measure CPU time with `clock()` from `<time.h>`
- Why CPU time differs from wall-clock time
- Why repeated runs of identical code give different timings
- How algorithmic complexity shows up in measured time
- How to place timing boundaries so that printing is never measured

## 📄 Files

| File | Description | How it works |
|---|---|---|
| [`baseline_loop.c`](./baseline_loop.c) | Times a fixed loop of 100,000,000 iterations | `clock()` is read before and after the loop; the accumulator is `volatile` so the compiler cannot optimize the loop away |
| [`comparison_algorithms.c`](./comparison_algorithms.c) | Compares a naive and an efficient way to count even numbers in a 50,000-element array | One version uses nested loops, the other a single pass; both are timed on the same data |
| [`instrumentation_lab.c`](./instrumentation_lab.c) | Times several phases of one program separately | A deterministic pseudo-random dataset (fixed seed) is built, processed, and verified with a checksum; each phase has its own `start` and `end`, plus a `TOTAL` around all of them |
| [`baseline_loop-metrics.md`](./baseline_loop-metrics.md) | Raw timings for the baseline loop | Three runs recorded verbatim, with their average |
| [`comparison_algorithms-metrics.md`](./comparison_algorithms-metrics.md) | Raw timings for the two counting algorithms | Three runs per algorithm, with their averages |
| [`green_efficiency_analysis.md`](./green_efficiency_analysis.md) | Written analysis of all measurements | Methodology, observed differences, and what they mean for energy use |

## ⚙️ Requirements

- Compiled on Ubuntu (WSL) with
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`
- Timings are CPU time, averaged over three consecutive runs
- All `printf` calls are placed after the last `clock()` reading

## 👩‍💻 Author

**Reem Alnufaisi** — [@ReemNfis](https://github.com/ReemNfis)

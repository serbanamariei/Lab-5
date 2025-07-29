# Lab 5 – Fundamentals of the C Language: Arrays

This folder contains solved problems from Lab 5 of the "Programming Fundamentals" course.

## Topics Covered

- Declaring and initializing 1D arrays (`int[]`, `float[]`, `double[]`)
- Accessing and modifying elements using indices
- Passing arrays to functions
- Using `sizeof()` and memory calculations
- Performing operations on integer and real arrays
- Writing modular programs using `.h` and `.c` files
- Sorting arrays using bubble sort
- Using math functions like `pow` from `math.h`

## Problems

### Part 1 – Integer Arrays

#### Problem 1.1 – Stock Values in Two Stores
- Compute total stock for each product across two locations
- Compute total value of all items
- Functions used for: reading arrays, displaying arrays, vector sum, and scalar product

#### Problem 1.2 – Golden Apples
- Read apple counts from up to 50 trees
- Compute and return the sum of apples from trees above average productivity

#### Problem 1.3 – Weather Station
- Read daily min/max temperatures (up to 31 days)
- Compute:
  - Daily average temperature vector
  - Min of min temperatures
  - Max of max temperatures
  - Average of daily averages
  - Geometric mean of max temperatures

#### Problem 1.4 – Distinct Elements
- Read an array of up to 100 integers
- Create and return a new array with distinct values in input order

#### Problem 1.5 – Bubble Sort
- Read up to 30 integers
- Display the array
- Sort it in ascending order using bubble sort
- Display the sorted result

### Part 2 – Real Number Arrays

#### Problem 2.1 – Experimental Data
- Read real values into array `x`
- Compute:
  - Mean value
  - Root mean square deviation
  - Count of values ≤ mean
  - Array `y` with values > mean

#### Problem 2.2 – Linear Regression
- Read two real-valued arrays: time and concentration
- Compute regression coefficients `a` and `b` for equation `x = a*t + b`
- Handle degenerate or incompatible systems

## Build Instructions

To compile and link programs using arrays and math functions:

```bash
clang -Wall -c vectorInt.c       # Compile functions for integer arrays
clang -Wall -c main.c            # Compile main file
clang vectorInt.o main.o -o output

# If math.h is used (e.g. for pow), link with:
clang vectorInt.o main.o -lm -o output
```
## Build with Makefile

You can also compile the project using the provided `makefile`.

To build the project, simply run:

```bash
make

To clean up the object files and executables:

make clean

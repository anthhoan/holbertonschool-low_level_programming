# C - Variadic Functions

In this project, I learned how to work with **variadic functions** in C using the `va_start`, `va_arg`, and `va_end` macros. I also explored how and why to use the `const` type qualifier in C.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 📄 Header File

* **`variadic_functions.h`**
  Contains definitions and prototypes for all functions and types written in the project.

---

## 📃 Tasks

### 0. Beauty is variable, ugliness is constant

**File:** `0-sum_them_all.c`

* C function that returns the sum of all its parameters.
* If the parameter `n` is 0, the function returns 0.
* Utilizes variadic arguments to sum an arbitrary number of integers.

---

### 1. To be is to be the value of a variable

**File:** `1-print_numbers.c`

* C function that prints numbers, followed by a new line.
* The `separator` is a string printed between numbers.
* The `n` parameter specifies the number of integers passed to the function.
* If `separator` is NULL, it is not printed.

---

### 2. One woman's constant is another woman's variable

**File:** `2-print_strings.c`

* C function that prints strings, followed by a new line.
* The `separator` is a string printed between the strings.
* The `n` parameter specifies the number of strings passed to the function.
* If `separator` is NULL, it is not printed.
* If one of the strings is NULL, the function prints `(nil)` instead of the string.

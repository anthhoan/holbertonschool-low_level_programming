# C - Recursion

In this project, I learned about **recursion** in C—how functions can call themselves to solve problems through repeated breakdown into simpler sub-problems.

---

## 📁 Project Structure

### ✅ Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 🙌 Helper File

**`_putchar.c`**
Custom function used to write a single character to `stdout`.

### 📄 Header File

**`main.h`**
Contains function prototypes used across the project.

| File                      | Prototype                             |
| ------------------------- | ------------------------------------- |
| `0-puts_recursion.c`      | `void _puts_recursion(char *s);`      |
| `1-print_rev_recursion.c` | `void _print_rev_recursion(char *s);` |
| `2-strlen_recursion.c`    | `int _strlen_recursion(char *s);`     |
| `3-factorial.c`           | `int factorial(int n);`               |
| `4-pow_recursion.c`       | `int _pow_recursion(int x, int y);`   |
| `5-sqrt_recursion.c`      | `int _sqrt_recursion(int n);`         |
| `6-is_prime_number.c`     | `int is_prime_number(int n);`         |

---

## 📃 Tasks

### 0. She locked away a secret...

**File:** `0-puts_recursion.c`
Recursively prints a string followed by a new line.

---

### 1. Why is it so important to dream?

**File:** `1-print_rev_recursion.c`
Recursively prints a string in reverse order.

---

### 2. Dreams feel real while we're in them...

**File:** `2-strlen_recursion.c`
Returns the length of a string using recursion.

---

### 3. You mustn't be afraid to dream a little bigger, darling

**File:** `3-factorial.c`
Computes the factorial of a given number using recursion.
Returns `-1` if the input is less than 0.

---

### 4. Once an idea has taken hold of the brain...

**File:** `4-pow_recursion.c`
Returns `x` raised to the power of `y` using recursion.
Returns `-1` if `y` is negative.

---

### 5. Your subconscious is looking for the dreamer

**File:** `5-sqrt_recursion.c`
Returns the natural square root of a number using recursion.
Returns `-1` if the number has no natural square root.

---

### 6. Inception. Is it possible?

**File:** `6-is_prime_number.c`
Checks whether a number is prime using recursion.

* Returns `1` if the number is prime, `0` otherwise.

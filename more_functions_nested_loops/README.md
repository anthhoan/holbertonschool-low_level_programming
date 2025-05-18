# C - More Functions, More Nested Loops

In this project, I continued learning about writing functions and using nested loops in C. The tasks focus on creating reusable code, working with conditional logic, and output formatting using characters and loops.

---

## 📁 Project Structure

### ✅ Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the behavior of each function.

### 🙌 Helper File

**`_putchar.c`**
A custom implementation of the `_putchar` function used to write a character to `stdout`.

### 📄 Header File

**`main.h`**
This header file contains the function prototypes used throughout the project.

| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `0-isupper.c`            | `int _isupper(int c);`           |
| `1-isdigit.c`            | `int _isdigit(int c);`           |
| `2-mul.c`                | `int mul(int a, int b);`         |
| `3-print_numbers.c`      | `void print_numbers(void);`      |
| `4-print_most_numbers.c` | `void print_most_numbers(void);` |
| `5-more_numbers.c`       | `void more_numbers(void);`       |
| `6-print_line.c`         | `void print_line(int n);`        |
| `7-print_diagonal.c`     | `void print_diagonal(int n);`    |
| `8-print_square.c`       | `void print_square(int size);`   |
| `10-print_triangle.c`    | `void print_triangle(int size);` |

---

## 📃 Tasks

### 0. isupper

**File:** `0-isupper.c`
Checks for uppercase characters.

* Returns `1` if the character is uppercase
* Returns `0` otherwise

---

### 1. isdigit

**File:** `1-isdigit.c`
Checks for digits (0 through 9).

* Returns `1` if true
* Returns `0` otherwise

---

### 2. Collaboration is multiplication

**File:** `2-mul.c`
Multiplies two integers and returns the result.

---

### 3. The numbers speak for themselves

**File:** `3-print_numbers.c`
Prints the numbers 0 to 9 followed by a new line.

---

### 4. I believe in numbers and signs

**File:** `4-print_most_numbers.c`
Prints the numbers 0 to 9 **except** for 2 and 4, followed by a new line.

---

### 5. Numbers constitute the only universal language

**File:** `5-more_numbers.c`
Prints numbers 0 to 14, ten times, each followed by a new line.

---

### 6. The shortest distance between two points is a straight line

**File:** `6-print_line.c`
Draws a straight line (`_`) in the terminal based on input length `n`.

* If `n <= 0`, prints only a new line.

---

### 7. I feel like I am diagonally parked in a parallel universe

**File:** `7-print_diagonal.c`
Draws a diagonal line (`\`) in the terminal based on input `n`.

* If `n <= 0`, prints only a new line.

---

### 8. You are so much sunshine in every square inch

**File:** `8-print_square.c`
Prints a square of `#` characters, size defined by the input.

* If `size <= 0`, prints only a new line.

---

### 9. Fizz-Buzz

**File:** `9-fizz_buzz.c`
Prints numbers 1 to 100, replacing:

* Multiples of 3 with `"Fizz"`
* Multiples of 5 with `"Buzz"`
* Multiples of both with `"FizzBuzz"`

Each output is separated by a space.
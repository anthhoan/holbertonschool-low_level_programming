# C - Functions, Nested Loops

In this project, I learned how to:

* Use **nested loops** in C
* Define and use **functions**
* Work with **header files**
* Understand and apply **variable scope**

This foundational knowledge supports structured programming and improves code readability and reusability.

---

## Tests ✔️

**Directory:** `tests/`
Contains test files provided by Holberton School to verify the correctness of each function.

---

## Helper File 🙌

### `_putchar.c`

Custom implementation of the `_putchar` function used to write characters to `stdout`.

---

## Header File 📁

### `main.h`

Contains all function prototypes used throughout the project.

| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `1-alphabet.c`           | `void print_alphabet(void);`     |
| `2-print_alphabet_x10.c` | `void print_alphabet_x10(void);` |
| `3-islower.c`            | `int _islower(int c);`           |
| `4-isalpha.c`            | `int _isalpha(int c);`           |
| `5-sign.c`               | `int print_sign(int n);`         |
| `6-abs.c`                | `int _abs(int);`                 |
| `7-print_last_digit.c`   | `int print_last_digit(int);`     |
| `8-24_hours.c`           | `void jack_bauer(void);`         |
| `9-times_table.c`        | `void times_table(void);`        |
| `10-add.c`               | `int add(int, int);`             |
| `11-print_to_98.c`       | `void print_to_98(int n);`       |
| `100-times_table.c`      | `void print_times_table(int n);` |

---

## Tasks 📃

### 0. \_putchar

**File:** `0-holberton.c`
Prints the word `Holberton`, followed by a new line.
Returns `0`.

---

### 1. I sometimes suffer from insomnia...

**File:** `1-alphabet.c`
Function that prints the lowercase alphabet followed by a new line.

---

### 2. 10 x alphabet

**File:** `2-print_alphabet_x10.c`
Function that prints the lowercase alphabet **10 times**, each followed by a new line.

---

### 3. islower

**File:** `3-islower.c`
Function that checks for lowercase characters.
Returns:

* `1` if the character is lowercase
* `0` otherwise

---

### 4. isalpha

**File:** `4-isalpha.c`
Function that checks for alphabetic characters.
Returns:

* `1` if the character is a letter
* `0` otherwise

---

### 5. Sign

**File:** `5-sign.c`
Function that prints the sign of a number.
Returns:

* `1` and prints `+` if positive
* `0` and prints `0` if zero
* `-1` and prints `-` if negative

---

### 6. Absolute value

**File:** `6-abs.c`
Function that returns the **absolute value** of an integer.

---

### 7. Last digit

**File:** `7-print_last_digit.c`
Function that prints and returns the **last digit** of a number.

---

### 8. Jack Bauer

**File:** `8-24_hours.c`
Function that prints every minute of the day (00:00 to 23:59).

---

### 9. Learn your times table

**File:** `9-times_table.c`
Function that prints the 9 times table starting with 0.

---

### 10. a + b

**File:** `10-add.c`
Function that returns the **sum of two integers**.

---

### 11. Count to 98

**File:** `11-print_to_98.c`
Function that prints all natural numbers from a given number to `98`, separated by commas and spaces.
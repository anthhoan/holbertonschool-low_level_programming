# C - Pointers, Arrays and Strings

In this project, I learned:

* What pointers are and how to use them
* The difference between pointers and arrays
* How to manipulate strings and arrays using pointers
* How to define and call functions that use pointers as parameters

---

## 📁 Project Structure

### ✅ Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the behavior of the functions.

### 🙌 Helper File

**`_putchar.c`**
Custom implementation of the `_putchar` function used to write a character to `stdout`.

### 📄 Header File

**`main.h`**
Header file containing function prototypes used in the project.

| File              | Prototype                               |
| ----------------- | --------------------------------------- |
| `0-reset_to_98.c` | `void reset_to_98(int *n);`             |
| `1-swap.c`        | `void swap_int(int *a, int *b);`        |
| `2-strlen.c`      | `int _strlen(char *s);`                 |
| `3-puts.c`        | `void _puts(char *str);`                |
| `4-print_rev.c`   | `void print_rev(char *s);`              |
| `5-rev_string.c`  | `void rev_string(char *s);`             |
| `6-puts2.c`       | `void puts2(char *str);`                |
| `7-puts_half.c`   | `void puts_half(char *str);`            |
| `8-print_array.c` | `void print_array(int *a, int n);`      |
| `9-strcpy.c`      | `char *_strcpy(char *dest, char *src);` |
| `100-atoi.c`      | `int _atoi(char *s);`                   |

---

## 📃 Tasks

### 0. 98 Battery st.

**File:** `0-reset_to_98.c`
Updates the value of an integer to `98` using a pointer.

---

### 1. Don't swap horses in crossing a stream

**File:** `1-swap.c`
Swaps the values of two integers using pointers.

---

### 2. This report, by its very length, defends itself against the risk of being read

**File:** `2-strlen.c`
Returns the length of a string.

---

### 3. I do not fear computers. I fear the lack of them

**File:** `3-puts.c`
Prints a string followed by a new line to `stdout`.

---

### 4. I can only go one way. I've not got a reverse gear

**File:** `4-print_rev.c`
Prints a string in reverse, followed by a new line.

---

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

**File:** `5-rev_string.c`
Reverses a string in place.

---

### 6. Half the lies they tell about me aren't true

**File:** `6-puts2.c`
Prints every other character of a string, starting with the first, followed by a new line.

---

### 7. Winning is only half of it. Having fun is the other half

**File:** `7-puts_half.c`
Prints the second half of a string, followed by a new line.

* If the string length is odd, it prints from `(length - 1) / 2`

---

### 8. Arrays are not pointers

**File:** `8-print_array.c`
Prints `n` elements of an array of integers, followed by a new line.

* Elements are separated by a comma and space
* Displayed in the same order as stored in the array
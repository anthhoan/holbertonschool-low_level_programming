# C - More Pointers, Arrays and Strings

In this project, I continued to practice using **pointers**, **arrays**, and **strings** in C. I explored more advanced string manipulation, memory handling, and array operations using pointer arithmetic and custom functions.

---

## 📁 Project Structure

### ✅ Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the behavior of each function.

### 🙌 Helper File

**`_putchar.c`**
Custom implementation of the `_putchar` function used to output characters to `stdout`.

### 📄 Header File

**`holberton.h`**
Contains all function prototypes used throughout the project.

| File                 | Prototype                                                      |
| -------------------- | -------------------------------------------------------------- |
| `0-strcat.c`         | `char *_strcat(char *dest, char *src);`                        |
| `1-strncat.c`        | `char *_strncat(char *dest, char *src, int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |

---

## 📃 Tasks

### 0. strcat

**File:** `0-strcat.c`
Concatenates two strings. Appends the `src` string to the `dest` string, adding a terminating null byte at the end.

---

### 1. strncat

**File:** `1-strncat.c`
Concatenates two strings using at most `n` bytes from `src`.
Adds a terminating null byte unless `n` bytes are reached before one is encountered.

---

### 2. strncpy

**File:** `2-strncpy.c`
Copies a string, including the null terminator, using at most `n` bytes.
If `src` is shorter than `n`, the remaining space in `dest` is filled with null bytes.
Works like the standard `strncpy()`.

---

### 3. strcmp

**File:** `3-strcmp.c`
Compares two strings character by character.
Returns the difference between the first unmatched characters.
Mimics the behavior of `strcmp()` from the C standard library.

---

### 4. I am a kind of paranoid in reverse...

**File:** `4-rev_array.c`
Reverses the content of an array of integers.

---

### 5. Always look up

**File:** `5-string_toupper.c`
Converts all lowercase letters in a string to uppercase.

---

### 6. Expect the best...

**File:** `6-cap_string.c`
Capitalizes the first letter of each word in a string.

---

### 7. Mozart composed his music...

**File:** `7-leet.c`
Encodes a string into 1337 (leet speak).

* `a/A` → `4`
* `e/E` → `3`
* `o/O` → `0`
* `t/T` → `7`
* `l/L` → `1`
  Uses only one `if` and two loops—no `switch` or ternary operators.
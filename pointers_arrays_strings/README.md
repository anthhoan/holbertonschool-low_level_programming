# C - Even More Pointers, Arrays and Strings

In this project, I learned how to:

* Use pointers to pointers (double pointers)
* Work with multidimensional arrays in C
* Utilize key C standard library functions for manipulating strings and memory

---

## 📁 Project Structure

### ✅ Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functionality of the implemented code.

### 🙌 Helper File

**`_putchar.c`**
Provides a custom `_putchar` function to write characters to standard output (`stdout`).

### 📄 Header File

**`main.h`**
Contains all function prototypes used across this project.

| File                   | Prototype                                               |
| ---------------------- | ------------------------------------------------------- |
| `0-memset.c`           | `char *_memset(char *s, char b, unsigned int n);`       |
| `1-memcpy.c`           | `char *_memcpy(char *dest, char *src, unsigned int n);` |
| `2-strchr.c`           | `char *_strchr(char *s, char c);`                       |
| `3-strspn.c`           | `unsigned int _strspn(char *s, char *accept);`          |
| `4-strpbrk.c`          | `char *_strpbrk(char *s, char *accept);`                |
| `5-strstr.c`           | `char *_strstr(char *haystack, char *needle);`          |
| `7-print_chessboard.c` | `void print_chessboard(char (*a)[8]);`                  |
| `8-print_diagsums.c`   | `void print_diagsums(int *a, int size);`                |

---

## 📃 Tasks

### 0. memset

**File:** `0-memset.c`
Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.

* Returns a pointer to the memory area `s`.

---

### 1. memcpy

**File:** `1-memcpy.c`
Copies `n` bytes from memory area `src` to memory area `dest`.

* Returns a pointer to `dest`.

---

### 2. strchr

**File:** `2-strchr.c`
Returns a pointer to the first occurrence of character `c` in the string `s`.

* Returns `NULL` if not found.

---

### 3. strspn

**File:** `3-strspn.c`
Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`.

---

### 4. strpbrk

**File:** `4-strpbrk.c`
Locates the first occurrence in the string `s` of any of the bytes in `accept`.

* Returns a pointer to the byte in `s` that matches one from `accept`, or `NULL` if none found.

---

### 5. strstr

**File:** `5-strstr.c`
Finds the first occurrence of the substring `needle` in the string `haystack`.

* Returns a pointer to the beginning of the located substring, or `NULL` if not found.

---

### 6. Chess is mental torture

**File:** `6-print_chessboard.c`
Prints an 8x8 chessboard represented by a 2D array of characters.

---

### 7. The line of life is a ragged diagonal between duty and desire

**File:** `7-print_diagsums.c`
Prints the sum of the two diagonals of a square matrix of integers.

---

### 8. Double pointer, double fun

**File:** `8-set_string.c`
Sets the value of a pointer to a character (modifies the pointer to point to another string).

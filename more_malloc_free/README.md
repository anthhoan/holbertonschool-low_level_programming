# C - More malloc, free

In this project, I further explored dynamic memory allocation in C, specifically focusing on the use of `exit`, `calloc`, and `realloc`. I learned how to manage memory more efficiently and handle potential memory allocation failures.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 📄 Header File

**`main.h`**
Contains function prototypes for all functions in the project.

| File                 | Prototype                                                                  |
| -------------------- | -------------------------------------------------------------------------- |
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);`                                    |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                |
| `2-calloc.c`         | `char *calloc(unsigned int nmemb, unsigned int size);`                     |
| `3-array_range.c`    | `int *array_range(int min, int max);`                                      |

---

## 📃 Tasks

### 0. Trust no one

**File:** `0-malloc_checked.c`
C function that returns a pointer to a newly-allocated space in memory using `malloc`.

* If `malloc` fails, the function calls `exit(98)` to terminate the program.

---

### 1. string\_nconcat

**File:** `1-string_nconcat.c`
C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings.

* The returned pointer contains `s1` followed by the first `n` bytes of `s2`, null-terminated.
* If `n` is greater than or equal to the length of `s2`, the entire string `s2` is used.
* If `NULL` is passed for either string, the function treats it as an empty string.
* If the function fails, it returns `NULL`.

---

### 2. \_calloc

**File:** `2-calloc.c`
C function that allocates memory for an array, using `malloc` and sets the memory to zero.

* Allocates memory for `nmemb` elements, each of size `size`.
* If `nmemb` or `size` is zero, or the function fails, it returns `NULL`.

---

### 3. array\_range

**File:** `3-array_range.c`
C function that returns a pointer to a newly-allocated space in memory containing an array of integers.

* The array contains all the integers from `min` to `max`, inclusive, ordered from `min` to `max`.
* If `min` is greater than `max` or the function fails, it returns `NULL`.
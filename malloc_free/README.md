# C - malloc, free

In this project, I learned about dynamic memory allocation in C using `malloc`, `free`, and how to handle memory management in programs. I also explored the use of `valgrind` to check for memory leaks.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 📄 Header File

**`main.h`**
Contains function prototypes used across the project.

| File               | Prototype                                        |
| ------------------ | ------------------------------------------------ |
| `0-create_array.c` | `char *create_array(unsigned int size, char c);` |
| `1-strdup.c`       | `char *_strdup(char *str);`                      |
| `2-str_concat.c`   | `char *str_concat(char *s1, char *s2);`          |
| `3-alloc_grid.c`   | `int **alloc_grid(int width, int height);`       |
| `4-free_grid.c`    | `void free_grid(int **grid, int height);`        |

---

## 📃 Tasks

### 0. Float like a butterfly, sting like a bee

**File:** `0-create_array.c`
C function that returns a pointer to a newly-allocated space in memory containing an array of characters.

* The array is initialized with the character `c`.
* If the function fails or if `size` is 0, the function returns `NULL`.

---

### 1. The woman who has no imagination has no wings

**File:** `1-strdup.c`
C function that returns a pointer to a newly-allocated space in memory containing a copy of the string passed as a parameter (`str`).

* The function uses `malloc` to allocate memory for the string, and the memory can later be freed with `free`.
* If `str` is `NULL` or memory is unavailable, the function returns `NULL`.

---

### 2. He who is not courageous enough to take risks will accomplish nothing in life

**File:** `2-str_concat.c`
C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings (`s1` and `s2`).

* The returned pointer contains `s1` followed by `s2` and is null-terminated.
* The function treats `NULL` as an empty string.
* If the function fails, it returns `NULL`.

---

### 3. If you even dream of beating me you'd better wake up and apologize

**File:** `3-alloc_grid.c`
C function that returns a pointer to a newly-allocated space in memory containing a two-dimensional array of integers.

* Each element of the two-dimensional array is initialized to 0.
* If the function fails, or if either `width` or `height` is 0 or negative, it returns `NULL`.

---

### 4. It's not bragging if you can back it up

**File:** `4-free_grid.c`
C function that frees a two-dimensional array previously created by `alloc_grid` in `3-alloc_grid.c`.

* The function ensures the program does not crash when invalid two-dimensional arrays are provided.
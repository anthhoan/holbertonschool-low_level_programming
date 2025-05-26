# C - Function Pointers

In this project, I learned about **function pointers** in C, exploring what they hold, where they point in virtual memory, and how to use them effectively. I gained experience in using function pointers to implement more dynamic and flexible code.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 📄 Header Files

* **`function_pointers.h`**
  Contains function prototypes for programs 0-2 of the project.

* **`3-calc.h`**
  Contains function prototypes and structure definitions for the program in **3-main.c**.

---

## 📃 Tasks

### 0. What's my name

**File:** `0-print_name.c`

* C function that prints a name.
* The function takes a string `name` and a function pointer `f` that prints the name.

---

### 1. If you spend too much time thinking about a thing, you'll never get it done

**File:** `1-array_iterator.c`

* C function that executes a function given as a parameter on each element of an array.
* The function accepts an array, its size, and a function pointer (`action`), which is applied to each array element.

---

### 2. To hell with circumstances; I create opportunities

**File:** `2-int_index.c`

* C function that searches for an integer in an array.
* It returns the index of the first element for which the comparison function (`cmp`) does not return 0.
* If no element matches or if `size <= 0`, the function returns -1.

---

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at

**Files:**

* **`3-op_functions.c`**
  Contains five functions that implement basic arithmetic operations:

  * `op_add`: Returns the sum of two numbers.
  * `op_sub`: Returns the difference of two numbers.
  * `op_mul`: Returns the product of two numbers.
  * `op_div`: Returns the division of two numbers.
  * `op_mod`: Returns the remainder of dividing two numbers.
* **`3-get_op_func.c`**
  Contains a function that selects the correct operation function based on the user's input operator (`+`, `-`, `*`, `/`, or `%`).

  * If the operator is invalid, the function returns `NULL`.
* **`3-main.c`**
  C program that performs simple mathematical operations based on user input.

  * Usage: `./a.out num1 operator num2`
  * The program expects valid integers for `num1` and `num2`, and one of the five operators (`+`, `-`, `*`, `/`, or `%`).
  * If invalid arguments are passed (wrong operator or incorrect number of arguments), the program prints `Error` and exits with appropriate status values:

    * `98` for incorrect arguments.
    * `99` for invalid operators.
    * `100` for division by zero.

---

### Example Usage:

```bash
$ ./a.out 5 + 3
8
$ ./a.out 10 / 2
5
$ ./a.out 10 / 0
Error
```

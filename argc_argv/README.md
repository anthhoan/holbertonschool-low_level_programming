# C - argc, argv

In this project, I learned how to utilize arguments passed to C functions using `argc` (argument count) and `argv` (argument vector). I also practiced handling unused variables and parameters using `__attribute__((unused))` or `void` in functions.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 🙌 Helper File

**`_putchar.c`**
Custom function used to write a single character to `stdout`.


| File              | Prototype                           |
| ----------------- | ----------------------------------- |
| `0-whatsmyname.c` | `int main(int argc, char *argv[]);` |
| `1-args.c`        | `int main(int argc, char *argv[]);` |
| `2-args.c`        | `int main(int argc, char *argv[]);` |
| `3-mul.c`         | `int main(int argc, char *argv[]);` |
| `4-add.c`         | `int main(int argc, char *argv[]);` |

---

## 📃 Tasks

### 0. It ain't what they call you, it's what you answer to

**File:** `0-whatsmyname.c`
C program that prints its name, followed by a new line. If the program is renamed, it will print the new name without needing to be recompiled. The path is excluded before the name of the program.

---

### 1. Silence is argument carried out by other means

**File:** `1-args.c`
C program that prints the number of arguments passed to it, followed by a new line.

---

### 2. The best argument against democracy is a five-minute conversation with the average voter

**File:** `2-args.c`
C program that prints all arguments it receives, including the first one. Each argument is printed on a new line, ending with a new line.

---

### 3. Neither irony nor sarcasm is argument

**File:** `3-mul.c`
C program that multiplies two numbers and prints the result, followed by a new line.

* If the program receives fewer than two arguments, it prints "Error" followed by a new line and exits with code 1.

---

### 4. To infinity and beyond

**File:** `4-add.c`
C program that adds two positive numbers and prints the result, followed by a new line.

* If no number is passed, it prints `0` followed by a new line.
* If one of the numbers contains non-digit characters, the program prints "Error" followed by a new line and exits with code 1.

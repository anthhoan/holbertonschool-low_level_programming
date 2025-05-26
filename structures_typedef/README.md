# C - Structures, typedef

In this project, I learned about using structures and `typedef` in C. I explored how to define and use structures, along with how `typedef` can simplify the usage of structures by creating new type names.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 📄 Header File

**`dog.h`**
Contains structure definitions and function prototypes for the project.

| Type/File       | Definition/Prototype                                                                                 |
| --------------- | ---------------------------------------------------------------------------------------------------- |
| `struct dog`    | Defines a structure representing a dog with three members: `char *name`, `float age`, `char *owner`. |
| `typedef dog_t` | Creates a new type name for `struct dog` called `dog_t`.                                             |

---

## 📃 Tasks

### 0. Django

**File:** `dog.h`

* This task involves defining a structure `dog` with the following elements:

  * `char *name`
  * `float age`
  * `char *owner`
* It also uses `typedef` to create a new type `dog_t` for `struct dog`.

---

### 1. A dog is the only thing on earth that loves you more than you love yourself

**File:** `1-init_dog.c`
C function that initializes a variable of type `struct dog`.

* This function takes a pointer to a `struct dog` and initializes its members (`name`, `age`, and `owner`) with the provided arguments.

---

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

**File:** `2-print_dog.c`
C function that prints a `struct dog`.

* The function prints the members of the `struct dog` (`name`, `age`, and `owner`).
* If any member is `NULL`, the function prints `(nil)` instead of the member's value.
* If the struct itself is `NULL`, the function prints nothing.
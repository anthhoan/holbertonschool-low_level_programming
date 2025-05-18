# C - Singly Linked Lists

In this project, I practiced building and using **singly linked lists** in C. I learned when and why to use linked lists versus arrays and how linked lists can be more efficient for certain data manipulation tasks, especially when handling dynamic data sets.

---

## 📁 Project Structure

### 📂 Tests

**Directory:** `tests/`
Contains test files provided by Holberton School to validate the functions.

### 📄 Header File

* **`lists.h`**
  Contains definitions and prototypes for all types and functions written in the project.

---

## 📃 Tasks

### 0. Print List

**File:** `0-print_list.c`

* C function that prints all the elements of a `list_t` list.
* If `str` is `NULL`, the function prints `[0] (nil)`.

### 1. List Length

**File:** `1-list_len.c`

* C function that returns the number of elements in a `list_t` list.

### 2. Add Node

**File:** `2-add_node.c`

* C function that adds a new node at the beginning of a `list_t` list.
* If the function fails, it returns `NULL`.
* Otherwise, it returns the address of the new element.

### 3. Add Node at the End

**File:** `3-add_node_end.c`

* C function that adds a new node at the end of a `list_t` list.
* If the function fails, it returns `NULL`.
* Otherwise, it returns the address of the new element.

### 4. Free List

**File:** `4-free_list.c`

* C function that frees a `list_t` list.

---


## Example Usage

```c
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "First Node");
    add_node_end(&head, "Second Node");
    add_node_end(&head, "Third Node");

    print_list(head); // Expected output: 3 nodes printed

    free_list(head);  // Free the allocated memory
    return 0;
}
```

---

## 🧑‍💻 Functions Overview

* **`print_list`**
  Prints all elements of a list, handling NULL strings properly.

* **`list_len`**
  Returns the number of elements in a linked list.

* **`add_node`**
  Adds a new node at the beginning of the list.

* **`add_node_end`**
  Adds a new node at the end of the list.

* **`free_list`**
  Frees the entire list to avoid memory leaks.

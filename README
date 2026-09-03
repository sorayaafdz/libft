# Libft

![C](https://img.shields.io/badge/C-Programming-blue?style=flat-square\&logo=c)
![42](https://img.shields.io/badge/42-Common%20Core-black?style=flat-square)
![Makefile](https://img.shields.io/badge/Build-Makefile-orange?style=flat-square)

> **My own C library — 42 Madrid Common Core**

**Libft** is the first project of the 42 Common Core. The goal is to recreate a collection of functions from the C standard library and implement additional utility functions that can be reused throughout future projects.

This project was developed from scratch in **C**, with a strong focus on low-level programming, memory management, pointers, strings, data structures and modular code.

---

## 📖 About the project

The purpose of Libft is to build a personal C library containing commonly used functions that can be reused in subsequent projects.

Instead of relying directly on many standard library functions, the project requires implementing their behavior from scratch while respecting the constraints imposed by the 42 coding standards.

The project is divided into two parts:

* **Mandatory part:** reimplementation of standard C library functions and additional utility functions.
* **Bonus part:** implementation of a complete set of singly linked-list operations.

My implementation contains:

* **34 mandatory functions**
* **9 bonus functions**
* **43 functions in total**

The resulting library is compiled into a static library named `libft.a`.

---

## 🛠️ Technologies

* **Language:** C
* **Compiler:** GCC
* **Build system:** Makefile
* **Library type:** Static library (`libft.a`)
* **Standard:** C
* **Coding standard:** 42 Norm

---

## 📂 Project structure

```text
libft/
│
├── Makefile
├── libft.h
│
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
│
├── ft_lstnew_bonus.c
├── ft_lstadd_front_bonus.c
├── ft_lstsize_bonus.c
├── ft_lstlast_bonus.c
├── ft_lstadd_back_bonus.c
├── ft_lstdelone_bonus.c
├── ft_lstclear_bonus.c
├── ft_lstiter_bonus.c
└── ft_lstmap_bonus.c
```

---

# ⚙️ Compilation

Clone the repository and enter the project directory:

```bash
git clone https://github.com/sorayaafdz/libft.git
cd libft/libft
```

### Compile the mandatory part

```bash
make
```

This creates the static library:

```text
libft.a
```

### Compile the bonus part

```bash
make bonus
```

### Clean object files

```bash
make clean
```

### Remove all generated files

```bash
make fclean
```

### Recompile everything

```bash
make re
```

---

# 📚 Functions

## Mandatory Part

### Character functions

Functions for checking and converting characters.

| Function     | Description                                            |
| ------------ | ------------------------------------------------------ |
| `ft_isalpha` | Checks whether a character is alphabetic.              |
| `ft_isdigit` | Checks whether a character is a decimal digit.         |
| `ft_isalnum` | Checks whether a character is alphanumeric.            |
| `ft_isascii` | Checks whether a character belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable.               |
| `ft_toupper` | Converts a lowercase character to uppercase.           |
| `ft_tolower` | Converts an uppercase character to lowercase.          |

---

### String functions

Functions for manipulating and inspecting null-terminated strings.

| Function      | Description                                                               |
| ------------- | ------------------------------------------------------------------------- |
| `ft_strlen`   | Returns the length of a string.                                           |
| `ft_strchr`   | Locates the first occurrence of a character in a string.                  |
| `ft_strrchr`  | Locates the last occurrence of a character in a string.                   |
| `ft_strncmp`  | Compares two strings up to a specified number of characters.              |
| `ft_strnstr`  | Searches for a substring within a string up to a specified length.        |
| `ft_strdup`   | Creates a dynamically allocated copy of a string.                         |
| `ft_strlcpy`  | Copies a string into a destination buffer with size limitation.           |
| `ft_strlcat`  | Appends a string to another with size limitation.                         |
| `ft_strtrim`  | Removes specified characters from the beginning and end of a string.      |
| `ft_strjoin`  | Concatenates two strings into a newly allocated string.                   |
| `ft_substr`   | Creates a substring from a given string.                                  |
| `ft_split`    | Splits a string into an array of strings using a delimiter.               |
| `ft_strmapi`  | Applies a function to each character and returns a new string.            |
| `ft_striteri` | Applies a function to each character while modifying the original string. |

---

### Memory functions

Functions for manipulating raw memory blocks.

| Function     | Description                                               |
| ------------ | --------------------------------------------------------- |
| `ft_memset`  | Fills a memory area with a specified byte value.          |
| `ft_bzero`   | Sets a memory area to zero.                               |
| `ft_memcpy`  | Copies a block of memory.                                 |
| `ft_memmove` | Copies memory safely when source and destination overlap. |
| `ft_memchr`  | Searches for a byte within a memory block.                |
| `ft_memcmp`  | Compares two memory blocks.                               |
| `ft_calloc`  | Allocates and initializes memory to zero.                 |

---

### Conversion functions

| Function  | Description                                                   |
| --------- | ------------------------------------------------------------- |
| `ft_atoi` | Converts a string representation of an integer into an `int`. |
| `ft_itoa` | Converts an integer into a dynamically allocated string.      |

---

### File descriptor output functions

Functions for writing data to a file descriptor.

| Function        | Description                              |
| --------------- | ---------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd`  | Writes a string to a file descriptor.    |
| `ft_putendl_fd` | Writes a string followed by a newline.   |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.  |

---

# 🔗 Bonus — Linked Lists

The bonus part introduces dynamic data structures through a singly linked list.

The list is represented using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:

* `content`: a pointer to the stored data.
* `next`: a pointer to the next node.

This part focuses on dynamic memory allocation, pointers, linked-list traversal and memory cleanup.

| Function          | Description                                              |
| ----------------- | -------------------------------------------------------- |
| `ft_lstnew`       | Creates a new list node.                                 |
| `ft_lstadd_front` | Adds a node to the beginning of a list.                  |
| `ft_lstsize`      | Returns the number of nodes in a list.                   |
| `ft_lstlast`      | Returns the last node of a list.                         |
| `ft_lstadd_back`  | Adds a node to the end of a list.                        |
| `ft_lstdelone`    | Deletes a single node and frees its content.             |
| `ft_lstclear`     | Deletes and frees an entire list.                        |
| `ft_lstiter`      | Applies a function to every node in a list.              |
| `ft_lstmap`       | Creates a new list by applying a function to every node. |

---

# 🧠 Concepts learned

This project provided a practical introduction to several fundamental concepts of C and low-level programming.

### Memory management

* Dynamic memory allocation with `malloc`
* Memory initialization with `calloc`
* Manual memory deallocation with `free`
* Avoiding memory leaks
* Managing allocated buffers
* Handling allocation failures

### Pointers

* Pointer arithmetic
* Pointers to pointers
* Generic pointers (`void *`)
* Function pointers
* Passing data by reference
* Manipulating memory through pointers

### Strings and arrays

* Null-terminated strings
* String traversal
* String comparison
* String copying
* String concatenation
* Substring extraction
* String splitting

### Data structures

The bonus part introduced:

* Singly linked lists
* Dynamic node allocation
* List traversal
* Insertion and deletion
* List transformation
* Recursive/dynamic memory cleanup

### File descriptors

The output functions provided practice with writing directly to file descriptors using `write()`.

### Build systems

The project also involved creating a `Makefile` to automate:

* Compilation
* Object file generation
* Static library creation
* Bonus compilation
* Cleaning generated files
* Full project recompilation

---

# 🔧 Makefile

The project uses a Makefile to compile the source files into a static library.

Main targets:

```text
make          → Compile mandatory functions
make bonus    → Compile bonus functions
make clean    → Remove object files
make fclean   → Remove object files and libft.a
make re       → Clean and rebuild the project
```

The library is generated as:

```text
libft.a
```

The Makefile uses:

```make
CC = gcc
CFLAGS = -Wall -Wextra -Werror
```

which enables common compiler warnings and treats warnings as errors.

---

# 🚀 Using Libft in another project

Once `libft.a` has been generated, it can be linked with another C project.

Include the header:

```c
#include "libft.h"
```

Then compile your project together with the library:

```bash
gcc main.c -L. -lft -I. -o program
```

Where:

* `-L.` searches for libraries in the current directory.
* `-lft` links against `libft.a`.
* `-I.` tells the compiler where to find `libft.h`.

---

# 📌 Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *message;

    message = ft_strdup("Hello from Libft!");

    if (!message)
        return (1);

    printf("%s\n", message);
    free(message);

    return (0);
}
```

Compile it with:

```bash
gcc main.c -L. -lft -I. -o program
```

Run:

```bash
./program
```

---

# 🎯 Project goals

The main objectives of Libft were to:

* Reimplement fundamental C library functions.
* Understand how common library functions work internally.
* Strengthen knowledge of pointers and memory.
* Learn safe dynamic memory management.
* Work with strings and raw memory.
* Implement and manipulate linked lists.
* Create and use a static library.
* Automate compilation using Make.
* Follow strict coding and project constraints.

---

# 📈 Skills demonstrated

```text
C Programming
├── Pointers
├── Memory Management
├── String Manipulation
├── Arrays
├── Function Pointers
├── File Descriptors
├── Dynamic Allocation
└── Linked Lists

Software Development
├── Modular Programming
├── Static Libraries
├── Makefiles
├── Compilation
└── Error Handling
```

---

# 🏫 42 Common Core

**Project:** Libft

**School:** 42 Madrid

**Curriculum:** Common Core

**Language:** C

---

## 👩‍💻 Author

**Soraya Fernández**

42 Madrid — Common Core

[GitHub](https://github.com/sorayaafdz)

---

## 📄 License

This project was developed as part of the 42 Madrid Common Core curriculum and is intended primarily for educational purposes.

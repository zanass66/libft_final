*This project has been created as part of the 42 curriculum by zeanass.*

## Description
**Libft** is the foundational C programming project at 42, designed to help students understand the inner workings of standard C library functions by reimplementing them from scratch. The goal of this project is to build a custom, highly optimized, and memory-safe C library (`libft.a`) containing general-purpose functions. This library serves as a critical toolkit that will be used and expanded upon in all future C school assignments. All code is written in strict accordance with the 42 Norminette standard, ensuring memory leak prevention, proper variable alignment, and safe pointer manipulation.

## Detailed Library Description
The library is divided into three main components, providing a wide array of tools for memory manipulation, string parsing, and data structure management:

**Part 1: Libc Functions**
Reimplementations of standard C library functions with the exact same prototypes and behaviors as their `man` page definitions, prefixed with `ft_`.
*   **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
*   **String manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
*   **Character classification & conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

**Part 2: Additional Functions**
A set of utility functions either not included in standard libc or existing in a different form.
*   **String generation/parsing:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
*   **Function iteration:** `ft_strmapi`, `ft_striteri`
*   **File descriptor outputs:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3: Linked Lists**
A suite of functions to create, iterate, and safely free singly linked lists using a custom `t_list` structure.
*   **List creation/addition:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
*   **List navigation:** `ft_lstsize`, `ft_lstlast`
*   **Memory management & iteration:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions
This project includes a `Makefile` that compiles the source files into a static library archive without unnecessary relinking.

**Compilation**
Run the following commands in the root of the repository:
*   `make` - Compiles the `.c` files and generates the `libft.a` archive.
*   `make clean` - Removes all generated `.o` object files.
*   `make fclean` - Removes the object files and the `libft.a` executable.
*   `make re` - Forces a complete recompilation of the library.

**Usage in Projects**
To use this library in your own C programs:
1. Include the header file in your `.c` scripts: `#include "libft.h"`
2. Compile your program alongside the static library: 
   `cc -Wall -Wextra -Werror main.c -L. -lft -o my_program`

## Resources & AI Usage
**Classic References**
*   Standard UNIX `man` pages (e.g., `man 3 string`, `man 3 stdlib`).
*   GNU C Library (glibc) standard documentation.

**AI Usage**
In accordance with 42 guidelines, AI was used strictly as a learning assistant and debugger, not as a code generator. It helped with:
1. **Understanding Concepts:** Visualizing pointer arithmetic, heap memory, and linked list behavior.
2. **Norminette (V3):** Fixing formatting errors like tab alignments and the 25-line limit.
3. **Debugging:** Spotting logic flaws, `malloc` size errors, and `Makefile` issues before compilation.
# Holberton School Low-Level Programming

This repository contains solutions for the Holberton School Low-Level Programming curriculum.

## Projects

### 1. malloc_free
Memory allocation and deallocation exercises in C.

**Files:**
- `0-create_array.c` - Creates an array of chars
- `1-strdup.c` - Duplicates a string
- `2-str_concat.c` - Concatenates two strings
- `3-alloc_grid.c` - Creates a 2D array of integers
- `4-free_grid.c` - Frees a 2D grid

### 2. more_malloc_free
Advanced memory allocation exercises.

**Files:**
- `0-malloc_checked.c` - Allocates memory using malloc with error checking
- `1-string_nconcat.c` - Concatenates two strings with length limit
- `2-calloc.c` - Custom implementation of calloc
- `3-array_range.c` - Creates an array of integers from min to max

### 3. structures_typedef
Structures and typedef exercises.

**Files:**
- `dog.h` - Header file with dog structure definition
- `0-main.c` to `5-main.c` - Test files
- `1-init_dog.c` - Initializes a dog structure
- `2-print_dog.c` - Prints a dog structure
- `4-new_dog.c` - Creates a new dog
- `5-free_dog.c` - Frees a dog

### 4. function_pointers
Function pointer exercises.

**Files:**
- `0-print_name.c` - Prints a name using function pointer
- `function_pointers.h` - Header file

## Compilation

All programs are compiled with:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89


 
git add .
#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to function that prints the name
 *
 * Description: Calls the function pointed by f with name as argument.
 * If name or f is NULL, does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
cd ~/holbertonschool-low_level_programming/function_pointers
cat << 'EOF' > 0-print_name.c
#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to function that prints the name
 *
 * Description: Calls the function pointed by f with name as argument.
 * If name or f is NULL, does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}

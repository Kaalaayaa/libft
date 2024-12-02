# Libft

Libft is a personal project for the 42 School, which involves creating your own C standard library. This project requires you to implement commonly used functions from the C standard library, such as memory management, string manipulation, and others. The goal is to master basic C programming concepts and improve understanding of low-level system operations.

## Table of Contents

- [About](#about)
- [Functions Implemented](#functions-implemented)
- [Usage](#usage)

## About

Libft aims to recreate a subset of the C standard library, allowing students to use their own custom implementations of fundamental functions. You will need to implement various utility functions, such as string manipulation, memory handling, and other common operations that are essential for building robust C applications.

By the end of this project, you will have a solid understanding of C, pointers, memory management, and algorithms. The functions implemented in this project are meant to help you in future 42 projects where standard library functions might be restricted.

## Functions Implemented

Here are some of the main categories and functions that you will implement in this project:

### Memory Functions
- `ft_memset()`
- `ft_bzero()`
- `ft_memcpy()`
- `ft_memccpy()`
- `ft_memmove()`
- `ft_memcmp()`
- `ft_calloc()`
- `ft_strdup()`

### String Functions
- `ft_strlen()`
- `ft_strdup()`
- `ft_strcpy()`
- `ft_strncpy()`
- `ft_strcat()`
- `ft_strncat()`
- `ft_strlcat()`
- `ft_strchr()`
- `ft_strrchr()`
- `ft_strstr()`
- `ft_strnstr()`
- `ft_strcmp()`
- `ft_strncmp()`
- `ft_atoi()`
- `ft_itoa()`

### Character Functions
- `ft_isalpha()`
- `ft_isdigit()`
- `ft_isalnum()`
- `ft_isascii()`
- `ft_isprint()`
- `ft_toupper()`
- `ft_tolower()`

### List Functions
- `ft_lstnew()`
- `ft_lstadd_front()`
- `ft_lstadd_back()`
- `ft_lstdelone()`
- `ft_lstclear()`
- `ft_lstiter()`
- `ft_lstmap()`

### Additional Functions
- `ft_putchar_fd()`
- `ft_putstr_fd()`
- `ft_putendl_fd()`
- `ft_putnbr_fd()`

## Usage

To use the functions in your C programs, simply copy the necessary source files and header file into your project and link them appropriately. You can include `libft.h` and call any of the implemented functions in your C code.

Here is an example of how to use one of the functions:

```c
#include "libft.h"

int main() {
    char *str = "Hello, Libft!";
    printf("Length of string: %zu\n", ft_strlen(str));
    return 0;
}

# libft

**libft** is a custom C library created for the **42 School** curriculum. It provides a collection of commonly-used functions that are typically included in the C standard library, as well as some additional utility functions. The goal of this project is to implement these functions from scratch, reinforcing understanding of memory management, algorithmic thinking, and the fundamentals of C programming.

## Table of Contents

- [Overview](#overview)
- [List of Functions](#list-of-functions)
- [Installation](#installation)
- [Usage](#usage)

## Overview

This project involves creating a **libft** library, implementing various functions like string manipulation, memory management, and other utilities in pure C. The library is intended to replace the standard C library for some functions, giving you full control over memory handling and implementation details.

### Key Features:
- Custom implementations of standard C library functions
- Provides utility functions for efficient memory and string manipulation
- Useful for other projects that require these basic functionalities

## List of Functions

Here is a list of functions that are implemented in **libft**:

### Memory Management
- `ft_memset`: Set a block of memory to a specific value.
- `ft_bzero`: Set a block of memory to zero.
- `ft_memcpy`: Copy a block of memory from one location to another.
- `ft_memccpy`: Copy memory with a limit.
- `ft_memmove`: Move a block of memory, safely handling overlap.
- `ft_memchr`: Search a block of memory for a specific character.
- `ft_memcmp`: Compare two blocks of memory.
- `ft_calloc`: Allocate memory for an array and initialize it to zero.

### String Manipulation
- `ft_strlen`: Return the length of a string.
- `ft_strdup`: Duplicate a string.
- `ft_strcpy`: Copy one string into another.
- `ft_strncpy`: Copy a specified number of characters from one string to another.
- `ft_strcat`: Concatenate two strings.
- `ft_strncat`: Concatenate a specified number of characters from one string to another.
- `ft_strchr`: Find the first occurrence of a character in a string.
- `ft_strrchr`: Find the last occurrence of a character in a string.
- `ft_strstr`: Find the first occurrence of a substring in a string.
- `ft_strnstr`: Find the first occurrence of a substring in the first n characters of a string.
- `ft_strcmp`: Compare two strings.
- `ft_strncmp`: Compare the first n characters of two strings.

### Character Handling
- `ft_isalpha`: Check if a character is alphabetic.
- `ft_isdigit`: Check if a character is a digit.
- `ft_isalnum`: Check if a character is alphanumeric.
- `ft_isascii`: Check if a character is an ASCII character.
- `ft_isprint`: Check if a character is printable.
- `ft_toupper`: Convert a character to uppercase.
- `ft_tolower`: Convert a character to lowercase.

### Utility Functions
- `ft_atoi`: Convert a string to an integer.
- `ft_itoa`: Convert an integer to a string.
- `ft_strsplit`: Split a string into an array of substrings.
- `ft_strjoin`: Join two strings into a new string.
- `ft_strtrim`: Trim whitespace from both ends of a string.
- `ft_lstnew`: Create a new linked list element.
- `ft_lstadd`: Add an element to the beginning of a linked list.
- `ft_lstmap`: Apply a function to each element of a linked list.
- `ft_lstiter`: Iterate over a linked list.

## Installation

To use the **libft** library in your own C project, follow these steps:

1. Clone this repository:

   ```bash
   git clone https://github.com/yourusername/libft.git
Navigate to the project directory:

bash
Copy code
cd libft
Compile the library:

bash
Copy code
make
To clean up compiled object files:

bash
Copy code
make clean
To remove all generated files (objects and the library):

bash
Copy code
make fclean
To recompile the library after making changes:

bash
Copy code
make re

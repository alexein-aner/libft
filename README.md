# libft - Custom C Standard Library

## Introduction
This project is my own implementation of a subset of the C standard library functions, created as part of the 42 school curriculum. The goal of `libft` is to provide a deeper understanding of low-level programming concepts like memory management, string manipulation, and linked lists. The functions implemented here are all written from scratch without using any external libraries (except standard system calls like `malloc`).

## What I Did
The `libft` project is divided into several categories of functions:

1. **Memory Functions**: These include functions like `ft_memset`, `ft_memcpy`, and `ft_bzero` that deal with manipulating raw memory. This helped reinforce my understanding of pointers and how memory is managed in C.

2. **String Manipulation**: Functions such as `ft_strlen`, `ft_strlcat`, and `ft_strdup` are designed to handle C-style strings. Writing these functions improved my ability to work with null-terminated character arrays and boundary handling.

3. **Character Checks and Conversions**: Functions like `ft_isalpha`, `ft_isdigit`, `ft_tolower`, and `ft_toupper` replicate standard character handling routines. These are useful for validating and manipulating text inputs.

4. **Linked List Functions**: Implemented functions for creating, manipulating, and freeing linked lists. This was an opportunity to understand dynamic memory allocation and pointer management on a deeper level.

5. **Additional Functions**: Extra utility functions like `ft_atoi` (ASCII to integer) and `ft_split` (splitting strings) were added to enhance the flexibility of the library.

Throughout the project, I adhered to the 42 Norminette coding standard, focusing on memory safety, avoiding deep nesting, and maximizing code reusability by splitting logic into auxiliary functions.

## How to Use
Simply clone the repository and run `make` to compile the library. You can then link `libft.a` to your C projects to use the implemented functions.

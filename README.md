# 🦊 What is Libft?

**Libft** is the foundational project in the 42 Cursus.

The objective of this project is to create your own **C library** by implementing a collection of basic and essential functions. \
It will help you understand the basic of C, Headers, Makefiles, and Norms.

# ⚒️ Compilation

1. Run `make` to compile the library.
2. Run `make re` to recompile everything.

After compiling, you can include this library in any of your future projects.

# 🧼 Cleaning

1. Run `make clean` to remove every object files.
2. Run `make fclean` to remove every object files, including the library.

---

# 📑 List of Functions

## Functions from `<ctype.h>`

- [x] [`ft_isalnum`](https://github.com/flmarsou/1-Libft/blob/main/ft_isalnum.c) - Checks for an alphabetic or a digit character.
- [x] [`ft_isalpha`](https://github.com/flmarsou/1-Libft/blob/main/ft_isalpha.c) - Checks for an alphabetic character.
- [x] [`ft_isascii`](https://github.com/flmarsou/1-Libft/blob/main/ft_isascii.c) - Checks for an ASCII character.
- [x] [`ft_isdigit`](https://github.com/flmarsou/1-Libft/blob/main/ft_isdigit.c) - Checks for a digit character.
- [x] [`ft_isprint`](https://github.com/flmarsou/1-Libft/blob/main/ft_isprint.c) - Checks for a printable character
- [x] [`ft_tolower`](https://github.com/flmarsou/1-Libft/blob/main/ft_tolower.c) - Converts a character its lowercase equivalent.
- [x] [`ft_toupper`](https://github.com/flmarsou/1-Libft/blob/main/ft_toupper.c) - Converts a character its upperercase equivalent.

## Functions from `<string.h>`

- [x] [`ft_bzero`](https://github.com/flmarsou/1-Libft/blob/main/ft_bzero.c) - Replaces bytes with NULL.
- [x] [`ft_memchr`](https://github.com/flmarsou/1-Libft/blob/main/ft_memchr.c) - Scans a byte in a pointer.
- [x] [`ft_memcmp`](https://github.com/flmarsou/1-Libft/blob/main/ft_memcmp.c) - Compares two pointers.
- [x] [`ft_memcpy`](https://github.com/flmarsou/1-Libft/blob/main/ft_memcpy.c) - Copies two pointers.
- [x] [`ft_memmove`](https://github.com/flmarsou/1-Libft/blob/main/ft_memmove.c) - Copies two pointer without overlap.
- [x] [`ft_memset`](https://github.com/flmarsou/1-Libft/blob/main/ft_memset.c) - Replaces bytes in a pointer.
- [x] [`ft_strchr`](https://github.com/flmarsou/1-Libft/blob/main/ft_strchr.c) - Scans a character in a string.
- [x] [`ft_strdup`](https://github.com/flmarsou/1-Libft/blob/main/ft_strdup.c) - Duplicates and allocates a string.
- [x] [`ft_strlcat`](https://github.com/flmarsou/1-Libft/blob/main/ft_strlcat.c) - Concatenates two strings with a specified length.
- [x] [`ft_strlcpy`](https://github.com/flmarsou/1-Libft/blob/main/ft_strlcpy.c) - Copies a string with a specified length.
- [x] [`ft_strlen`](https://github.com/flmarsou/1-Libft/blob/main/ft_strlen.c) - Returns the length of a string.
- [x] [`ft_strncmp`](https://github.com/flmarsou/1-Libft/blob/main/ft_strncmp.c) - Compares two strings with a specified length.
- [x] [`ft_strnstr`](https://github.com/flmarsou/1-Libft/blob/main/ft_strnstr.c) - Scans a substring in a string.
- [x] [`ft_strrchr`](https://github.com/flmarsou/1-Libft/blob/main/ft_strrchr.c) - Scans a character in a string in reverse.

## Functions from `<stdlib.h>`

- [x] [`ft_atoi`](https://github.com/flmarsou/1-Libft/blob/main/ft_atoi.c) - String to Integer
- [x] [`ft_calloc`](https://github.com/flmarsou/1-Libft/blob/main/ft_calloc.c) - Allocates and replaces bytes with NULL.
- [x] [`ft_itoa`](https://github.com/flmarsou/1-Libft/blob/main/ft_itoa.c) - Integer to String

## Non-Standard Functions

- [x] [`ft_putchar_fd`](https://github.com/flmarsou/1-Libft/blob/main/ft_putchar_fd.c) - Prints a character.
- [x] [`ft_putendl_fd`](https://github.com/flmarsou/1-Libft/blob/main/ft_putendl_fd.c) - Prints a string followed by a newline.
- [x] [`ft_putnbr_fd`](https://github.com/flmarsou/1-Libft/blob/main/ft_putnbr_fd.c) - Prints an integer.
- [x] [`ft_putstr_fd`](https://github.com/flmarsou/1-Libft/blob/main/ft_putstr_fd.c) - Prints a string.
- [x] [`ft_split`](https://github.com/flmarsou/1-Libft/blob/main/ft_split.c) - Splits a string into an array of strings.
- [x] [`ft_striteri`](https://github.com/flmarsou/1-Libft/blob/main/ft_striteri.c) - Applies a function to every characters of a string.
- [x] [`ft_strjoin`](https://github.com/flmarsou/1-Libft/blob/main/ft_strjoin.c) - Concatenates and allocates two strings.
- [x] [`ft_strmapi`](https://github.com/flmarsou/1-Libft/blob/main/ft_strmapi.c) - Applies a function to every characters of a string and allocates them.
- [x] [`ft_strtrim`](https://github.com/flmarsou/1-Libft/blob/main/ft_strtrim.c) - Trims the beginning and end of a string.
- [x] [`ft_substr`](https://github.com/flmarsou/1-Libft/blob/main/ft_substr.c) - Cuts and allocates a string.

## Bonus Functions

- [x] [`ft_lstadd_back`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstadd_back.c) - Adds an node at the end of a list.
- [x] [`ft_lstadd_front`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstadd_front.c) - Adds an node at the beginning of a list.
- [x] [`ft_lstclear`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstclear.c) - Deletes and frees a list.
- [x] [`ft_lstdelone`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstdelone.c) - Deletes and frees a node with an applied function.
- [x] [`ft_lstiter`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstiter.c) - Applies a function to every nodes of a list.
- [x] [`ft_lstlast`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstlast.c) - Returns the last node of a list.
- [x] [`ft_lstmap`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstmap.c) - Applies a function to every nodes of a list.
- [x] [`ft_lstnew`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstnew.c) - Creates a new node.
- [x] [`ft_lstsize`](https://github.com/flmarsou/1-Libft/blob/main/ft_lstsize.c) - Returns the size of a list.

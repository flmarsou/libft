/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 08:31:55 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/09 12:23:17 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>	// write()
# include <stdlib.h>	// malloc(), free()
# include <string.h>	// misc functions
# include <stdio.h>		// printf()

/* ************************************************************************** */
/*                                                                            */
/*                                  BOOLEANS                                  */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks whether `c` is an alphabetic character.
 * @param c Character to be checked.
 * @return 1 if alpabetic character, 0 otherwise.
*/
int		ft_isalpha(int c);

/**
 * Checks whether `c` is a digit character.
 * @param c Character to be checked.
 * @return 1 if digit character, 0 otherwise.
*/
int		ft_isdigit(int c);

/**
 * Checks whether `c` is an alphabetic or a digit character.
 * @param c Character to be checked.
 * @return 1 if alphabetic or digit character, 0 otherwise.
*/
int		ft_isalnum(int c);

/**
 * Checks whether `c` is a printable character.
 * @param c Character to be checked.
 * @return 1 if printable character, 0 otherwise.
*/
int		ft_isprint(int c);

/**
 * Checks whether `c` is an ASCII character.
 * @param c Character to be checked.
 * @return 1 if ASCII character, 0 otherwise.
*/
int		ft_isascii(int c);

/**
 * Compares up to `size` characters of string `str1` to those of string `str2`.
 * @param str1 String to be compared.
 * @param str2 String to be compared.
 * @param size Number of characters to compare.
 * @return Different than zero if a difference is between `str1` and `str2`. 
*/
int		ft_strncmp(const char *str1, const char *str2, size_t size);

/**
 * Compares up to `size` bytes of pointer `ptr1` to those of pointer `ptr2`.
 * @param ptr1 Pointer to be compared.
 * @param ptr2 Pointer to be compared.
 * @param size Number of bytes to compare.
 * @return Different than zero if a difference is between `ptr1` and `ptr2`.
*/
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);

/* ************************************************************************** */
/*                                                                            */
/*                                  EDITORS                                   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Converts `c` to its lowercase equivalent.
 * @param c Character to be converted.
 * @return The lowercase equivalent if `c` is uppercase.
*/
int		ft_tolower(int c);

/**
 * Converts `c` to its uppercase equivalent.
 * @param c Character to be converted.
 * @return The uppercase equivalent if `c` is lowercase.
*/
int		ft_toupper(int c);

/**
 * Converts the string `str` as an integer, 
 * which is returned as a value of type `int`.
 * @param str String to convert.
 * @return On success, the function returns the converted 
 * string `str` as an `int` value. On failure, returns 0.
*/
int		ft_atoi(const char *str);

/**
 * Allocates (with malloc) and converts the integer `nbr` as a string, 
 * which is returned as a value of type `char *`.
 * @param nbr Integer to convert.
 * @return On success, the function returns the converted
 * integer `nbr` as a `char *` value. NULL if the allocation fails.
*/
char	*ft_itoa(int nbr);

/* ************************************************************************** */
/*                                                                            */
/*                                  PRINTERS                                  */
/*                                                                            */
/* ************************************************************************** */

/**
 * Writes a single character to the specified file descriptor.
 * @param c Character to write.
 * @param fd The file descriptor to write to.
 * @return None.
*/
void	ft_putchar_fd(char c, int fd);

/**
 * Writes a string to the specified file descriptor.
 * @param s String to write.
 * @param fd The file descriptor to write to.
 * @return None.
*/
void	ft_putstr_fd(char *str, int fd);

/**
 * Writes a string to the specified file descriptor, followed by a newline.
 * @param s String to write.
 * @param fd The file descriptor to write to.
 * @return None.
*/
void	ft_putendl_fd(char *str, int fd);

/**
 * Writes an integer to the specified file descriptor.
 * @param n Integer to write.
 * @param fd The file descriptor to write to.
 * @return None.
*/
void	ft_putnbr_fd(int nbr, int fd);

/* ************************************************************************** */
/*                                                                            */
/*                            STRING MANIPULATION                             */
/*                                                                            */
/* ************************************************************************** */

/**
 * Allocates (with malloc) and returns an array of strings obtained by splitting
 * `str` using `sep` as a delimiter. The array ends with a NULL pointer.
 * @param str String to be split.
 * @param sep Delimiter character.
 * @return The array of new strings resulting from the split.
 * NULL if the allocation fails.
*/
char	**ft_split(const char *str, char target);

/**
 * Returns a string to the first occurrence of `c` in the string `str`.
 * @param str String to search.
 * @param c Character to be located.
 * @return A string to the first occurrence of `c` in `str`. NULL otherwise.
*/
char	*ft_strchr(const char *str, int c);

/**
 * Duplicates a string with memory allocation for the new string.
 * @param str String to duplicate.
 * @return A string to the newly allocated string. NULL on failure.
*/
char	*ft_strdup(const char *str);

/**
 * Applies the function ’func’ on each character of the string passed as
 * argument, passing its index as first argument.
 * Each character is passed by address to ’func’ to be modified if necessary.
 * @param str String on which to iterate.
 * @param func Function to apply to each character.
*/
void	ft_striteri(char *str, void (*func)(unsigned int, char*));

/**
 * Allocates (with malloc) and returns a new string, 
 * result of concatenation of `str1` and `str2`.
 * @param str1 Prefix string.
 * @param str2 Suffix string.
 * @return The new concatenated string. NULL if the allocation fails.
*/
char	*ft_strjoin(const char *str1, const char *str2);

/**
 * Applies the function ’func’ to each character of the string ’str’,
 * and passing its index as first argument to create a new string (with malloc)
 * resulting from successive applications of ’func’.
 * @param str String on which to iterate.
 * @param func Function to apply to each character.
 * @return The string created from the successive applications of ’func’.
 * Returns NULL if the allocation fails.
*/
char	*ft_strmapi(const char *str, char (*func)(unsigned int, char));

/**
 * Returns a new string to the first occurrence of
 * the string `needle` in the string `haystack`.
 * @param haystack String to search.
 * @param needle String to look for.
 * @param size Numbers of characters to search.
 * @return A string to the first occurrence of
 * `needle` in `haystack`. NULL otherwise.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t size);

/**
 * Returns a new string to the last occurrence of `c` in the string `str`.
 * @param str String to search.
 * @param c Character to look for.
 * @return A string to the last occurrence of `c` in `str`. NULL otherwise.
*/
char	*ft_strrchr(const char *str, int c);

/**
 * Allocates (with malloc) and returns a copy of ’str’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string.
 * @param str String to be trimmed.
 * @param set Reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails. 
*/
char	*ft_strtrim(const char *str, const char *set);

/**
 * Allocates (with malloc) and returns a substring from the string `str`.
 * The substring begins at index `start` and is of maximum size `length`.
 * @param str String from which to create the substring.
 * @param start Specifies the start index of the substring in the string ’str’.
 * @param length Specifies the maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
*/
char	*ft_substr(const char *str, unsigned int start, size_t length);

/**
 * Erases the data in the `size` bytes of the memory starting at the location
 * pointed to by `ptr`, by writing zeros (bytes containing '\0') to that area.
 * @param ptr Pointer to erase data from..
 * @param size Number of bytes to set to '\0'.
 * @return None.
*/
void	ft_bzero(void *ptr, size_t size);

/**
 * Replaces a pointer with a specified value, and a specified maximum length.
 * @param ptr Pointer to the fill.
 * @param c Character to be set.
 * @param size Number of bytes to be set as `c`.
 * @return Modified pointer `ptr`.
*/
void	*ft_memset(void *ptr, int c, size_t size);

/**
 * Copies a pointer, with a specified maximum length. 
 * @param dest Pointer to copy to.
 * @param src Pointer to copy from.
 * @param size Number of bytes to copy.
 * @return Copied pointer `dest`.
*/
void	*ft_memcpy(void *dest, const void *src, size_t size);

/**
 * Copies a pointer, with a specified maximum length without overlap.
 * @param dest Pointer to copy to.
 * @param src Pointer to copy from.
 * @param size Number of bytes to copy.
 * @return Copied pointer `dest`.
*/
void	*ft_memmove(void *dest, const void *src, size_t size);

/**
 * Returns a pointer to the first occurrence of `c` in the pointer `ptr`.
 * @param ptr Pointer to search.
 * @param c Character to be located.
 * @param size Number of bytes to seach.
 * @return A pointer to the first occurence of `c` in `ptr`. NULL otherwise.
*/
void	*ft_memchr(const void *ptr, int c, size_t size);

/**
 * Allocates memory for an array of `amount` elements,
 * each of them `size` bytes long, and initializes all its bits to zero.
 * @param amount Number of elements to allocate.
 * @param size Size of each element.
 * @return Pointer to the allocated memory, or NULL if allocation fails.
*/
void	*ft_calloc(size_t amount, size_t size);

/**
 * Returns the length of the string `str`.
 * @param str String to count.
 * @return Length of the string.
*/
size_t	ft_strlen(const char *str);

/**
 * Copies the string `src` into the string `dest`
 * with a specified maximum length.
 * @param dest String to copy to.
 * @param src String to copy from.
 * @param size Number of characters to copy.
 * @result The total length of `src`.
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * Concatenates the string `src` to the end of the string `dest`.
 * @param dest String where `src` will be concatenated.
 * @param src String to be concatenated after `dest`.
 * @param size Number of bytes to concatenate.
 * @return The total length of the concatenated string (`dest` + `src`).
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/* ************************************************************************** */
/*                                                                            */
/*                                LINKED LIST                                 */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * Adds the node `new` at the beginning of the list.
 * @param new Address of a pointer to the node to be added to the list.
 * @param lst Address of a pointer to the first link of a list.
 * @return None.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Adds the node `new` at the end of the list.
 * @param lst Address of a pointer to the first link of a list.
 * @param new Address of a pointer to the node to be added to the list.
 * @return None.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Takes as a parameter a node and frees the memory of the node’s content
 * using the function `del` given as a parameter and free the node.
 * The memory of `next` must not be freed.
 * @param lst Node to free.
 * @param del Address of the function used to delete the content.
 * @return None.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * Deletes and frees the given node and every successor of that node,
 * using the function `del` and free.
 * Finally, the pointer to the list must be set to NULL.
 * @param lst Address of a pointer to a node.
 * @param del Address of the function used to delete the content of the node.
 * @return None.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * Iterates the list `lst` and applies the function `func`
 * on the content of each node.
 * @param lst Address of a pointer to a node.
 * @param func Address of the function used to iterate on the list.
 * @return None.
*/
void	ft_lstiter(t_list *lst, void (*func)(void *));

/**
 * Counts the number of nodes in a list.
 * @param lst Beginning of the list.
 * @return The length of the list.
*/
int		ft_lstsize(t_list *lst);

/**
 * Allocates (with malloc) and returns a new node. The member variable `content`
 * is initialized with the value of the parameter `content`.
 * The variable `next` is initialized to NULL.
 * @param content Content to create the node with.
 * @return The new node.
 * 
*/
t_list	*ft_lstnew(void *content);

/**
 * Returns the last node of the list.
 * @param lst Beginning of the list.
 * @return Last node of the list.
*/
t_list	*ft_lstlast(t_list *lst);

/**
 * Iterates the list `lst` and applies the function `f` on the content of each
 * node. Creates a new list resulting of the successive applications of the
 * function `f`.
 * The `del` function is used to delete the content of a node if needed.
 * @param lst Address of a pointer to a node.
 * @param func Address of the function used to iterate on the list.
 * @param del Address of the function used to
 * delete the content of a node if needed.
 * @return The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *));

#endif

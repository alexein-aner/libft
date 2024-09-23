/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:27:06 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/23 13:00:57 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct  s_list
{
    void    *content;
    struct  s_list *next;
}               t_list;

unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int    ft_strlcat(char *dest, const char *src, unsigned int size);
int             ft_isalpha(int c);
int             ft_isdigit(int c);
int             ft_isalnum(int c);
int             ft_isascii(int c);
int             ft_isprint(int c);
int             ft_strncmp(const char *s1, const char *s2, unsigned int n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
int             ft_atoi(const char *str);
int             ft_strlen(const char *str);
char            *ft_toupper(char *str);
char            *ft_tolower(char *str);
char            *ft_strchr(const char *s, int c);
char            *ft_strrchr(const char *s, int c);
char            *ft_strnstr(char *str, char *to_find, unsigned int n);
char            *ft_strdup(const char *src);
void            *ft_memset(void *s, int c, size_t n);
void            ft_bzero(void *s, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memmove(void *dest, const void *src, size_t n);
void            *ft_memchr(const void *s, int c, size_t n);
void            *ft_calloc(size_t nmemb, size_t size);
void            ft_lstadd_front(t_list **lst, t_list *new);
t_list          *ft_lstnew(void *content);
t_list          *ft_lstlast(t_list *lst);
int             ft_lstsize(t_list *lst);
void            ft_lstadd_back(t_list **lst, t_list *new);
char            **ft_split(char const *s, char c);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s, char const *set);
char            *ft_substr(char const *s, unsigned int start, size_t len);
void            ft_putnbr_fd(int n, int fd);
void            ft_putchar_fd(char c, int fd);
void            ft_putstr_fd(char *s, int fd);

#endif

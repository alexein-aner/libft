#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int		ft_isalpha(char);
int		ft_isdigit(char *str);
int		ft_isalnum(char *str);
int		ft_isascii(char c);
int		ft_isprint(char *str);
int		ft_strlen(char *str);
void		*memset(void *s, int c, size_t n);
void		bzero(void *s, size_t n);
void 		*memcpy(void *dest, const void *src, size_t n);
void		*memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char		*ft_toupper(char *str);
char		*ft_tolower(char *str);
char		*strchr(const char *s, int c);
char		*strrchr(const char *s, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void		*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(char *str, char *to_find, unsigned int n);
int		ft_atoi(char *str);

char		*ft_strdup(char *src);
void		*calloc(size_t nmemb, size_t size);

#endif

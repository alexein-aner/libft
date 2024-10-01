/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:40:53 by knieve-l          #+#    #+#             */
/*   Updated: 2024/10/01 11:55:32 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <unistd.h> 
# include <stdlib.h> 
# include <stddef.h> 

#define BUFFER_SIZE 42

unsigned int	ft_strlcpy(char *dest,  char *src, unsigned int size);
char		*get_next_line(int fd);
char		*ft_substr(char  *s, unsigned int start, size_t len);
char		*ft_strdup( char *src);
char		*ft_strjoin(char  *s1, char  *s2);
char		*ft_strchr( char *s, int c);
int		ft_strlen(char *str);

#endif

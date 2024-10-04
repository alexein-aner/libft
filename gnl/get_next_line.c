/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:27:10 by knieve-l          #+#    #+#             */
/*   Updated: 2024/10/03 12:10:28 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_chunk(int fd, char *left_c)
{
	int		bytes_read;
	char	*buf;

	bytes_read = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (ft_free(&left_c));
	buf[0] = '\0';
	while (bytes_read > 0 && !ft_strchr(buf, '\n'))
	{
		bytes_read = read (fd, buf, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buf[bytes_read] = '\0';
			left_c = ft_strjoin(left_c, buf);
		}
	}
	free(buf);
	if (bytes_read == -1)
		return (ft_free(&left_c));
	return (left_c);
}

char	*get_new_line(char *left_c)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(left_c, '\n');
	len = (ptr - left_c) + 1;
	line = ft_substr(left_c, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*store_leftover(char *left_c)
{
	char	*new_left_c;
	char	*ptr;
	int		len;

	ptr = ft_strchr(left_c, '\n');
	if (!ptr)
		return (ft_free(&left_c));
	len = (ptr - left_c) + 1;
	if (!left_c[len])
		return (ft_free(&left_c));
	new_left_c = ft_substr(left_c, len, ft_strlen(left_c) - len);
	ft_free(&left_c);
	if (!new_left_c)
		return (NULL);
	return (new_left_c);
}

char	*get_next_line(int fd)
{
	static char	*left_c;
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((left_c && !ft_strchr(left_c, '\n')) || !left_c)
		left_c = read_chunk(fd, left_c);
	if (!left_c)
		return (NULL);
	line = get_new_line(left_c);
	if (!line)
		return (ft_free(&left_c));
	left_c = store_leftover(left_c);
	return (line);
}

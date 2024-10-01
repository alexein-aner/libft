/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:13:49 by knieve-l          #+#    #+#             */
/*   Updated: 2024/10/01 12:00:11 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

static char	*read_chunk(int fd, char *left_c)
{
	char	*buffer;
	char	*tmp;
	int		bytes_read;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(left_c, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);  // Error handling (Checklist Point 5)
		}
		buffer[bytes_read] = '\0';
		tmp = ft_strjoin(left_c, buffer);  // Join buffer with leftover characters
		free(left_c);
		left_c = tmp;
	}
	free(buffer);
	return (left_c);
}

static char	*get_line(char *left_c)
{
	int		i;
	char	*line;

	i = 0;
	if (!left_c[i])
		return (NULL);
	while (left_c[i] && left_c[i] != '\n')
		i++;
	line = ft_substr(left_c, 0, i + 1);  // Extract line up to the newline
	return (line);
}

static char	*save_leftover(char *left_c)
{
	int		i;
	char	*new_left_c;

	i = 0;
	while (left_c[i] && left_c[i] != '\n')
		i++;
	if (!left_c[i])
	{
		free(left_c);
		return (NULL);
	}
	new_left_c = ft_strdup(left_c + i + 1);  // Save leftover after the newline
	free(left_c);
	return (new_left_c);
}

char	*get_next_line(int fd)
{
	static char	*left_c;  // Static to preserve leftover chars between calls
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)  // Error handling
		return (NULL);
	left_c = read_chunk(fd, left_c);  // Read from fd and append to leftovers
	if (!left_c)
		return (NULL);  // Return NULL on error or EOF
	line = get_line(left_c);  // Extract the next full line
	left_c = save_leftover(left_c);  // Save leftover chars for the next call
	return (line);
}

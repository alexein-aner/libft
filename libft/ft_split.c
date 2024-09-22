/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:55:16 by kamil             #+#    #+#             */
/*   Updated: 2024/09/22 14:16:34 by kamil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	is_new;
	int	word_count;

	i = 0;
	is_new = 1;
	word_count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c && is_new)
		{
			word_count++;
			is_new = 0;
		}
		else if (s[i] == c)
		{
			is_new = 1;
		}
		i++;
	}
	return (word_count);
}

int	ft_word_length(char const *s, char sep, int index)
{
	int	length;

	length = 0;

	while (s[index] != '\0' && s[index] != sep)
	{
		length++;
		index++;
	}
	return (length);
}

char	**ft_create_arr(int word_count)
{
	char	**arr;

	arr = ft_calloc(word_count + 1, sizeof(char *));
	if (!arr)
	{
		return (NULL);
	}
	return (arr);
}

char	**ft_fill_arr(char const *s, char sep, char **array)
{
	int	i;
	int	arr_idx;
	int	word_len;

	i = 0;
	arr_idx = 0;

	while (s[i] != '\0')
	{
		if (s[i] != sep)
		{
			word_len = ft_word_length(s, sep, i);
			array[arr_idx] = ft_calloc(word_len + 1, sizeof(char));
			if (!array[arr_idx])
			{
				while (arr_idx > 0)
				{
					free(array[--arr_idx]);
				}
				free(array);
				return (NULL);
			}
			ft_strlcpy(array[arr_idx], &s[i], word_len + 1);
			i += word_len;
			arr_idx++;
		}
		else
		{
			i++;
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int 	word_count;
	char 		**array;

	word_count = ft_count_words(s, c);
	array = ft_create_arr(word_count);
	if (!array)
	{
		return (NULL);
	}
	ft_fill_arr(s, c, array);
	return (array);
}

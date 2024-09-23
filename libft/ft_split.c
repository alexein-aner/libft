/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:00:19 by kamil             #+#    #+#             */
/*   Updated: 2024/09/23 12:56:49 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	is_new;
	int	count;

	i = 0;
	is_new = 1;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_new)
		{
			count++;
			is_new = 0;
		}
		else
			is_new = 1;
		i++;
	}
	return (count);
}

char	**ft_create_arr(int word_count)
{
	char	**arr;

	arr = ft_calloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (arr);
}

char	*ft_alloc_word(char const *s, char sep, int *index)
{
	char	*word;
	int		word_len;

	word_len = ft_word_len(s, sep, *index);
	word = ft_calloc((word_len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[*index], word_len + 1);
	*index += word_len;
	return (word);
}

char	**ft_fill_arr(char const *s, char sep, char **arr)
{
	int	i;
	int	idx;

	i = 0;
	idx = 0;
	while (s[i] != '\0')
	{
		if (s[i] != sep)
		{
			arr[idx] = ft_alloc_word(s, sep, &i);
			if (!arr[idx])
			{
				while (idx > 0)
					free(arr[--idx]);
				free(arr);
				return (NULL);
			}
			idx++;
		}
		else
			i++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**res_arr;

	word_count = ft_count_words(s, c);
	res_arr = ft_create_arr(word_count);
	if (!res_arr)
		return (NULL);
	ft_fill_arr(s, c, res_arr);
	if (!res_arr)
		return (NULL);
	return (res_arr);
}

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			i++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (i);
}

static char	*ft_create_word(const char *start, const char *end)
{
	char	*word;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	// Use strcpy to simplify the copying process
	ft_strlcpy(word, start, end - start + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*start;
	char	**split;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	split = ft_calloc(word_count + 1, sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c && !start)
			start = (char *)s;
		else if ((*s == c || *(s + 1) == '\0') && start)
		{
			split[i++] = ft_create_word(start, s + (*s != c)); // Handle end of string properly
			start = NULL;
		}
		s++;
	}
	return (split);
}

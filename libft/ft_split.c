/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:00:19 by kamil             #+#    #+#             */
/*   Updated: 2024/09/23 20:12:52 by kamil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			split[i++] = ft_create_word(start, s + (*s != c));
			start = NULL;
		}
		s++;
	}
	return (split);
}

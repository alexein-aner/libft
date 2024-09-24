/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:44:45 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/24 17:59:27 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
	{
		free(split[i]);
	}
	free(split);
}

int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		if (str[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_fill_split(const char *str, char c, char **split)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = -1;
	while (str[i++])
	{
		if (str[i] != c && start == -1)
			start = i;
		if ((str[i] == c || str[i + 1] == '\0') && start != -1)
		{
			split[j++] = ft_substr(str, start, i - start + (str[i + 1] == 0));
			if (!split[j])
			{
				ft_free(split);
				return (NULL);
			}
			start = -1;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_count;

	if (!s)
	{
		return (NULL);
	}
	word_count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	ft_fill_split(s, c, split);
	if (!split)
		return (NULL);
	return (split);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:19:36 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/24 15:36:23 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*copy_strings_with_sep(char *result, int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;

	ptr = result;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ptr = ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;
	char	*ptr;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = calculate_total_length(size, strs, sep);
	result = malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	ptr = copy_strings_with_sep(result, size, strs, sep);
	*ptr = '\0';
	return (result);
}

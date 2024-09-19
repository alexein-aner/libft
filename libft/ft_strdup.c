/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:50:08 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/19 17:53:36 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	length = ft_strlen(src);
	i = 0;
	copy = malloc(length + 1);
	while (i <= length)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

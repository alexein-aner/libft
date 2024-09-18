/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:23:01 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 16:34:12 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	ptr = (const char *)s;
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:02:54 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/25 12:57:15 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pd;
	const char	*ps;

	if (!dest || !src)
		return (NULL);
	pd = (char *)dest;
	ps = (const char *)src;
	i = 0;
	if (pd > ps)
	{
		while (n-- > 0)
			pd[n] = ps[n];
	}
	else
	{
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:02:54 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/20 10:45:19 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pd;
	const char	*ps;

	pd = (char *)dest;
	ps = (const char *)src;
	i = 0;
	if (pd > ps)
	{
		while (n > 0)
		{
			n--;
			pd[n] = ps[n];
		}
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

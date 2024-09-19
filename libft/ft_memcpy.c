/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:16:39 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 12:43:01 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pd;
	char	*ps;

	pd = (char *)dest;
	ps = (char *)src;
	i = 0;
	while(i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}

int main()
{
	char *src = "Hola";
	char dest[4];

	memcpy(dest, src, 4);
	int i = 0;
	while(i < 4)
	{
		printf("%c", dest[i]);
		i++;
	}
}

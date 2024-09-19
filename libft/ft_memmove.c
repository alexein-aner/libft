/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:02:54 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 13:20:01 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pd = (char *)dest;
	char	*ps = (char *)src;
	char	*pt = "";

	i = 0;
	while(i < n)
	{
		pt[i] = ps[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		pd[i] = pt[i];
		i++;
	}
	return (dest);
}

int main()
{
	char *src = "Hola";
	char dest[4];

	memmove(dest, src, 4);
	int i = 0;
	while(i < 4)
	{
		printf("%c", dest[i]);
		i++;
	}
}


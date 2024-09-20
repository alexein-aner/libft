/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:21:58 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/20 11:54:28 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t          i;
	unsigned char   *ptr;

	ptr = (unsigned char *)s;  // Use unsigned char for byte-wise manipulation
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;  // Ensure c is treated as a byte
		i++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:16:39 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/25 12:57:28 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num_bytes)
{
	size_t					i;
	unsigned char			*dest_ptr;
	const unsigned char		*src_ptr;

	if (!destination || !source || num_bytes == 0)
		return (destination);
	dest_ptr = (unsigned char *)destination;
	src_ptr = (const unsigned char *)source;
	i = 0;
	while (i < num_bytes)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (destination);
}

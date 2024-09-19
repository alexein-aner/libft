/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:29:39 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/15 18:07:04 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[i] != '\0')
	{
		src_len++;
		i++;
	}
	i = 0;
	while (i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
int main()
{
	char src[] = "Hola";
	char dest[5];
	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
	char src2[] = "";
	ft_strlcpy(dest, src2, 0);
	printf("%s", dest);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:43:09 by kamil             #+#    #+#             */
/*   Updated: 2024/09/24 13:10:01 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(size_t size, char *str, long nbr)
{
	str[size--] = '\0';
	while (nbr > 0)
	{
		str[size--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		str[size] = '0';
	else if (size == 0 && str[1] != '\0')
		str[size] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	size = 0;
	nbr = n;
	if (n <= 0)
	{
		nbr = -nbr;
		size = 1;
	}
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	ft_fill(size, str, nbr);
	return (str);
}

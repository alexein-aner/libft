/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:43:09 by kamil             #+#    #+#             */
/*   Updated: 2024/09/21 20:51:14 by kamil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_count_digits(long nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static void	ft_fill_string(size_t size, char *str, long nbr)
{
	while (nbr > 0)
	{
		size--;
		str[size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] != '\0')
		str[size] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = 0;
	if (n < 0)
	{
		nbr = -nbr;
		size = 1;
	}
	size += ft_count_digits(nbr);
	str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_fill_string(size, str, nbr);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:23:19 by kamil             #+#    #+#             */
/*   Updated: 2024/09/23 20:19:55 by kamil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	str_len;
	unsigned int	index;

	if (!s || !f)
		return ;
	str_len = ft_strlen(s);
	index = 0;
	while (index < str_len)
	{
		(*f)(index, s);
		s++;
		index++;
	}
}

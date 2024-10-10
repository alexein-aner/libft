/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:23:19 by kamil             #+#    #+#             */
/*   Updated: 2024/09/25 15:27:22 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	str_len;
	unsigned int	i;

	if (!s || !f)
		return ;
	str_len = ft_strlen(s);
	i = 0;
	while (i < str_len)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}

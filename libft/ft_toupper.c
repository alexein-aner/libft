/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:44:02 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 15:44:09 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - ('a' - 'A');
	return (str);
}
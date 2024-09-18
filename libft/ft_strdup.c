/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:50:08 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/25 10:16:29 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	length = 0;
	i = 0;
	while (src[length] != '\0')
		length++;
	copy = malloc(length + 1);
	while (i <= length)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
/*
int main()
{
	printf("%s", ft_strdup("Hola"));
}
*/

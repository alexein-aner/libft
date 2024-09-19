/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:36:50 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 19:12:47 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
        printf("%d\n", ft_strncmp("ABC", "ABC", 3));
        printf("%d\n", ft_strncmp("ABC", "AB", 2));
        printf("%d\n", ft_strncmp("ABA", "ABZ", 2));
        printf("%d\n", ft_strncmp("ABJ", "ABC", 2));
	printf("\n------------------------\n");
        printf("%d\n", strncmp("ABC", "ABC", 3));
        printf("%d\n", strncmp("ABC", "AB", 2));
        printf("%d\n", strncmp("ABA", "ABZ", 2));
        printf("%d\n", strncmp("ABJ", "ABC", 2));
}
*/

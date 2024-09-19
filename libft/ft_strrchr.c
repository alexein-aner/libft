/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:11:06 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 16:12:18 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;
	char	*last;

	i = 0;
 	last = NULL;
	 while (s[i] != '\0')
 	{
 		if (s[i] == c)
  		last = (char *)&s[i];
 		i++;
	}
	return (last);
}

int main(void)
{
	char *str = "Hola";

	printf("%p\n", strrchr(str, 'o'));
	return (0);
}

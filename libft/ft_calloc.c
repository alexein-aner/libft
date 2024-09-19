/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:33:58 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/18 11:45:48 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = malloc(nmemb * size);
	while (i <= nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
/*
int main()
{	
	char *arr = calloc(2, 4);
	arr[0] = 2;
	arr[1] = 4;
	printf("%d", arr[0]);
	printf("%d", arr[1]);
}
*/

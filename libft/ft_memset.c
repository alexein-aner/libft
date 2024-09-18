/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:21:58 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 12:24:17 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*memset(void *s, int c, size_t n)
{
	size_t	i;
	int	*ptr;
	
	i = 0;
	ptr = (int *)s;
	while(i < n)
	{
		ptr[i] = c;
		printf("%d", ptr[i]);
		i++;
	}
	return (s);
}

int main(void)
{
 	int *arr;

 	arr = malloc(4);
 	memset(arr, 5 , 3);
 	free(arr);
 	return (0);
}

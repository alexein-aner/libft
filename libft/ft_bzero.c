/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:04:19 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/17 12:12:37 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *memset(void *s, int c, size_t n)
{
	size_t i;
	char *ptr;
	
	i = 0;
	ptr = (char *)s;
	while(i < n)
	{
		ptr[i] = (char)c;
		printf("%c", ptr[i]);
		i++;
	}
	return (s);
}

void bzero(void *s, size_t n)
{
 	size_t i;
 	char *ptr;

 	i = 0;
 	ptr = (char *)s;
 	while (i < n)
 	{
  		ptr[i] = '\0';
  		printf("%c", ptr[i]);
  		i++;
 	}
}

int main(void)
{
 	char *arr;
	int i = 0;

 	arr = malloc(4);
 	memset(arr, 'a', 4);
//	bzero(arr, 4);
	printf("\nStarting check \n");
	while(arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i++;
	}
	printf("Check end \n");
	free(arr);
 	return (0);
}

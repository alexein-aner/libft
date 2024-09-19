/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:45:21 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/23 09:38:47 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
int	main(void)
{
	char dest1[20] = "Hello";
	char src1[] = " World";
	char dest2[20] = "Hello";
	char src2[] = " everybody";
	char dest3[15] = "123";
	char src3[] = "456789";
	char dest4[5] = "Hi";
	char src4[] = " there";
	char sand1[20] = "1234";
	char sand2[] = "123456";
	unsigned int result;

	// Test 1: Sufficient space
	result = ft_strlcat(dest1, src1, sizeof(dest1));
	printf("Test 1 - Resulting string: %s, Total length: %u\n", dest1, result);

	// Test 2: Insufficient space, but partial appending
	result = ft_strlcat(dest2, src2, sizeof(dest2));
	printf("Test 2 - Resulting string: %s, Total length: %u\n", dest2, result);

	// Test 3: Insufficient space, very small buffer
	result = ft_strlcat(dest3, src3, sizeof(dest3));
	printf("Test 3 - Resulting string: %s, Total length: %u\n", dest3, result);

	// Test 4: Buffer smaller than destination string length
	result = ft_strlcat(dest4, src4, sizeof(dest4));
	printf("Test 4 - Resulting string: %s, Total length: %u\n", dest4, result);
	
	
	result = ft_strlcat(sand1, sand2, 2);
	printf("Test 4 - Resulting string: %s, Total length: %u\n", sand1, result);
	return (0);
}


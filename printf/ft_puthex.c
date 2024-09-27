/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:09:32 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/27 11:18:58 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num, int cap)
{
	int		len;
	char	hex_digit;
	char	hex_cap;

	len = 0;
	hex_digit = "0123456789abcdef"[num % 16];
	hex_cap = "0123456789ABCDEF"[num % 16];
	if (num >= 16)
		len += ft_puthex(num / 16, cap);
	if (!cap)
		len += ft_putchar(hex_digit);
	else
		len += ft_putchar(hex_cap);
	return (len);
}

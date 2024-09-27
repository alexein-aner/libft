/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:58:26 by kamil             #+#    #+#             */
/*   Updated: 2024/09/27 11:55:22 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long long num, int cap);
int	ft_putptr(void *ptr);
int	ft_putstr(char *s);
int	ft_printf(char const *str, ...);
int	ft_putnbr_unsigned(unsigned int n);

#endif

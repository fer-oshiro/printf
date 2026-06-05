/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:30:56 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/05 14:52:19 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(unsigned int	num)
{
	char	*base;
	int		count;
	
	base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_hex(num / 16);
	ft_putchar_fd(base[num % 16], 1);
	count++;
	return (count);
}

int	ft_printf_hex(va_list args)
{
	char	*base;
	int		count;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_hex(num));
}
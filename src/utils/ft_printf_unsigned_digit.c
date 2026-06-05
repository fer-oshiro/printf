/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_digit.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:22:44 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/05 14:16:00 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned_digit(va_list args)
{
	unsigned int	numb;

	numb = va_arg(args, unsigned int);
	return (ft_unsigned_putnbr(numb, 1));
}

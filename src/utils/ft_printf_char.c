/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:47:35 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/05 10:48:15 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list args)
{
	unsigned char c;
	
	c = (unsigned char)va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

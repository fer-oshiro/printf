/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:14:26 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/05 14:53:00 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int i;
	int	res;
	va_list args;
	char *flags = "cspdiuxX%";
	va_start(args, format);
	
	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr(flags, format[i + 1]))
		{
			if (format[i+1] == 'c')
				res += ft_printf_char(args);
			else if (format[i+1] == 's')
				res += ft_printf_string(args);
			else if (format[i+1] == 'p')
				res += ft_printf_pointer(args);
			else if (ft_strchr("di", format[i + 1]))
				res += ft_printf_digit(args);
			else if (ft_strchr("u", format[i + 1]))
				res += ft_printf_unsigned_digit(args);
			else if (ft_strchr("x", format[i + 1]))
				res += ft_printf_hex(args);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			res++;
		}
		i++;
	}
	va_end(args);
	return (res);
}

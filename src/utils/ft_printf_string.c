/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:47:35 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/05 11:30:29 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(va_list args)
{
	char	*word;

	word = va_arg(args, char *);
	if (!word)
		word = "(null)";
	ft_putstr_fd(word , 1);
	return (ft_strlen(word));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:06:34 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/05 14:13:49 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unsigned_putnbr(unsigned int n, int fd)
{
	char	c;
	unsigned int		count;
	
	count = 0;
	if (n >= 10)
		count += ft_unsigned_putnbr(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
	count++;
	return (count);
}

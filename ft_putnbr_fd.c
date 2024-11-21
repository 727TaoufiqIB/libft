/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:54:40 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/17 13:39:18 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num[12];
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	while (nb > 0)
	{
		num[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while (--i >= 0)
		ft_putchar_fd(num[i], fd);
}

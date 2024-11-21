/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:59:27 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/14 13:24:08 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_signal(const char *nb, int *index)
{
	int	signal;

	signal = 1;
	if (nb[*index] == '-' || nb[*index] == '+')
	{
		if (nb[*index] == '-')
			signal *= -1;
		(*index)++;
	}
	return (signal);
}

int	ft_atoi(const char *nb)
{
	int		i;
	long	result;
	int		signal;
	long	check;

	i = 0;
	result = 0;
	while ((nb[i] >= 9 && nb[i] <= 13) || nb[i] == 32)
		i++;
	signal = get_signal(nb, &i);
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		check = result;
		result = (result * 10);
		result += (nb[i++] - '0');
		if (result / 10 != check)
		{
			if (signal == 1)
				return (-1);
			else
				return (0);
		}
	}
	return (result * signal);
}

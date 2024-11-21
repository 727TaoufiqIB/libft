/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:03:27 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/17 13:41:27 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*dublicate(int nb)
{
	int		len;
	char	*str;

	len = len_nb(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*result;
	long		nbr;
	int			len;

	nbr = n;
	result = dublicate(nbr);
	if (!result)
		return (NULL);
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		nbr = nbr * -1;
		result[0] = '-';
	}
	len = len_nb(n) - 1;
	while (nbr > 0)
	{
		result[len--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (result);
}

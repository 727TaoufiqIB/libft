/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:14:54 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/15 19:01:56 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int cha, size_t n)
{
	unsigned char	*ustr;
	size_t			i;

	ustr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ustr[i] = (unsigned char) cha;
		i++;
	}
	return (str);
}

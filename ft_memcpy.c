/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:40 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/18 16:05:53 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ch_dest;
	unsigned char	*ch_src;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	ch_dest = (unsigned char *) dest;
	ch_src = (unsigned char *) src;
	while (n > 0)
	{
		*(ch_dest)++ = *(ch_src++);
		n--;
	}
	return (dest);
}

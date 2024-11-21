/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:25:01 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/18 17:56:37 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcl;
	size_t	destl;
	size_t	i;
	size_t	destol;

	srcl = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (srcl);
	destl = ft_strlen(dst);
	destol = destl;
	i = 0;
	if (destl >= dstsize)
		return (srcl + dstsize);
	while (src[i] && destl < dstsize - 1)
	{
		dst[destl] = src[i];
		i++;
		destl++;
	}
	dst[destl] = 0;
	return (destol + srcl);
}

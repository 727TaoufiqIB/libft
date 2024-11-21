/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:24:02 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/15 18:52:55 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*tmp;
	size_t	total;

	total = num * size;
	if (num != 0 && (size != total / num))
		return (NULL);
	if (num == 0 || size == 0)
	{
		tmp = malloc(0);
		if (!tmp)
			return (NULL);
		return (tmp);
	}
	tmp = malloc(num * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, num * size);
	return (tmp);
}

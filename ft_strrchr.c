/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:32:44 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/21 15:41:54 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*sr;

	i = 0;
	cc = (char) c;
	sr = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			sr = (char *) s + i;
		i++;
	}
	if (s[i] == cc)
		sr = (char *) s + i;
	return (sr);
}

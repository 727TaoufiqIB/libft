/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:48:19 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/12 17:52:20 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*crnt;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	crnt = *lst;
	while (crnt != NULL)
	{
		tmp = crnt;
		crnt = crnt->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

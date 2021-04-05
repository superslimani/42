/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:16:47 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/24 18:32:09 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		list = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(list, del);
	}
	*lst = 0;
}

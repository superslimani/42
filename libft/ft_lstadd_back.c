/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:54:40 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/24 17:02:48 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (lst && new)
	{
		if (!current)
			*lst = new;
		else
		{
			while (current->next != NULL)
				current = current->next;
			current->next = new;
		}
	}
	return ;
}

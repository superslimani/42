/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:35 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 16:52:04 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			(char *)dst[i] = (char *)src[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			(char *)dst[i] = (char *)src[i];
			i++;
		}
	}
	return (dst);
}

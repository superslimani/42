/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:35 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/18 16:55:15 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = (int)len - 1;
	if (src1 < dst1)
	{
		while (i >= 0)
		{
			dst1[i] = src1[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

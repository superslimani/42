/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:04:48 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/18 15:32:28 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;
	unsigned char	c1;

	i = 0;
	c1 = (unsigned char)c;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (dst1[i] == c1)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}

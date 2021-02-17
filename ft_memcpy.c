/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:56:58 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 16:04:24 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;
	unsigned char *a;
	unsigned char *b;

	i = 0;
	a = (unsigned char *) src;
	b = (unsigned char *) dst;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}

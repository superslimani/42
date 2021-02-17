/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:04:48 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 16:25:55 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;
	unsigned char *a;
	unsigned char *b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (i < n)
	{
		a[i] = b[i];
		if ((unsigned char)c == b[i])
			return (a);
		i++;
	}
	return (NULL);
}

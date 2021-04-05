/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:52:28 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/18 17:49:07 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char*)s;
	ch = (unsigned char)c;
	while (i < (int)n)
	{
		if (*str == ch)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:42:42 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/19 13:32:23 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!s || !d)
		return (0);
	if (dstsize)
	{
		while ((s[i] != '\0') && (i < (dstsize - 1)))
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	while (s[i] != '\0')
		i++;
	return (i);
}

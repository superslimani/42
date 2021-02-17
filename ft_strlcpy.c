/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:42:42 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 14:11:42 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	*ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	
	while ((src[i] != '\0') && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

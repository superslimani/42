/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:52:28 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/17 16:43:43 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *a;

	i = 0;
	a = (unsigned char*)s;
	while (a[i] != '\0' && i < n)
	{
		if (a[i] == (unsigned char)c)
			return (a);
		i++;
	}
	return (NULL);
}

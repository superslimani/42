/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:20:13 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 15:51:06 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	int i;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		p[i] = (unsigned char *)c;
		i++;
	}
	return (b);
}

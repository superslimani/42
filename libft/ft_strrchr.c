/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:28:14 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/18 19:05:59 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*s1;

	i = 0;
	p = 0;
	s1 = (char *)s;
	if (s1[i] == 0 && c == 0)
		return (&s1[i]);
	while (s1[i] != 0)
	{
		if (s1[i] == (char)c)
			p = &s1[i];
		i++;
	}
	if (s1[i] == 0 && c == 0)
		return (&s1[i]);
	if (p != 0)
		return (p);
	return (0);
}

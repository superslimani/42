/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:16:33 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/18 20:07:59 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1copy;
	int		i;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	s1copy = malloc(sizeof(*s1) * (len + 1));
	if (!(s1copy))
		return (NULL);
	while (s1[i] != '\0')
	{
		s1copy[i] = s1[i];
		i++;
	}
	s1copy[i] = '\0';
	return (s1copy);
}

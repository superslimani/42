/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:29:19 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/23 15:58:42 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = len;
	if (!s)
		return (0);
	if (ft_strlen(s) - start <= slen)
		slen = ft_strlen(s) - start;
	if (ft_strlen(s) <= start)
	{
		start = 0;
		slen = 0;
	}
	if (!(subs = (char *)malloc(sizeof(char) * (slen + 1))))
		return (NULL);
	while (s[start] != '\0' && slen != 0)
	{
		subs[i++] = s[start++];
		slen--;
	}
	subs[i] = '\0';
	return (subs);
}

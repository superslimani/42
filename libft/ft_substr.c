/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:29:19 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/16 17:51:51 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subs;
	int i;
	int slen;

	slen = ft_strlen(*s);
	i = 0;
	subs = malloc(sizeof (*subs) * (slen + 1));
	if (!(subs = malloc(sizeof (*subs) * (slen + 1))))
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}


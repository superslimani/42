/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:16:33 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/16 13:28:30 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *strdup(const char *s1)
{
	const char s1copy;
	int i;
	int len;

	len = ft_strlen(s1);
	i = 0;
	if (!(s1copy = malloc(sizeof(s1copy) * (len + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		s1copy[i] = s1[i];
		i++;
	}
	s1copy[i] = '\0';
	return (s1copy);
}

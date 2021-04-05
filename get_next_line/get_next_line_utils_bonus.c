/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:15:03 by balbuque          #+#    #+#             */
/*   Updated: 2021/03/23 16:19:03 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int				i;
	int				j;
	char			*tab;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(tab = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	i = -1;
	while (s1[++i])
		tab[i] = s1[i];
	j = -1;
	while (s2[++j])
	{
		tab[i] = s2[j];
		i++;
	}
	tab[i] = '\0';
	free(s1);
	return (tab);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*dst;

	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

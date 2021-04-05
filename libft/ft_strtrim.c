/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:37:29 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/23 16:01:59 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(char const *set, char c)
{
	int j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (skip(set, s1[start]) && s1[start] != '\0')
		start++;
	end = (ft_strlen(s1));
	while (skip(set, s1[end - 1]) && start < end)
		end--;
	trim = malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:05:46 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/23 16:56:10 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				makecopy(char *dst, char *src, char *n)
{
	while (src < n)
		*(dst++) = *(src++);
	*dst = 0;
}

static long long	countwords(char const *s, char c)
{
	long long	nbwords1;

	nbwords1 = 0;
	while (*s)
	{
		if (*s != c)
		{
			++nbwords1;
			while (*s && *s != c)
				++s;
		}
		if (*s != 0)
			s++;
	}
	return (nbwords1);
}

char				**ft_split(char const *s, char c)
{
	int		i;
	int		nbwords;
	char	**array;
	char	*a;

	nbwords = countwords(s, c);
	array = (char **)malloc(sizeof(char *) * (nbwords + 1));
	i = 0;
	if (!s || !array)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			a = (char *)s;
			while (*s != c && *s)
				++s;
			array[i] = (char *)malloc(s - a + 1);
			makecopy(array[i++], a, (char *)s);
		}
		if (*s != 0)
			++s;
	}
	array[i] = 0;
	return (array);
}

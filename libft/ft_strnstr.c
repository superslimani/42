/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:24:17 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/24 18:34:53 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rhaystack;
	char	*rneedle;

	rhaystack = (char *)haystack;
	rneedle = (char *)needle;
	i = 0;
	if (!*rneedle)
		return (rhaystack);
	while (i < len && rhaystack[i])
	{
		j = 0;
		while (i + j < len && rhaystack[i + j] &&
				rneedle[j] && rhaystack[i + j] == rneedle[j])
			j++;
		if (rneedle[j] == '\0')
			return (&rhaystack[i]);
		i++;
	}
	return (0);
}

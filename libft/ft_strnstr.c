/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:24:17 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 14:20:15 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while ((haystack[i + j] != '\0') && (haystack[i + j] == needle[j]))
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

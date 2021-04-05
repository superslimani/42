/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:24:17 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/24 15:54:18 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rhaystack;

	i = 0;
	rhaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (rhaystack);
	if (len)
	{
		while ((rhaystack[i] != '\0') && (i < len - 1))
		{
			j = 0;
			while ((rhaystack[i + j] != '\0') &&
					(rhaystack[i + j] == needle[j]) && (i + j < len))
			{
				if (needle[j + 1] == '\0')
					return (&rhaystack[i]);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}

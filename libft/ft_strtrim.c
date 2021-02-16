/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:37:29 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/16 17:46:26 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	char const *trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] == (char *)(set))
		start++;
	end = (ft_strlen(*s1) - 1);
	while (s1[end] == (char *)(set))
		end--;
	trim = malloc(sizeof(s1) * (end - start + 1));
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:08:43 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/15 15:18:39 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int conv;

	i = 0;
	conv = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			conv *= 10;
			conv += str[i] - '0';
			i++;
		}
		i++;
	}
	return (sign * conv);
}

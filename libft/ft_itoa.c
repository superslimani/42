/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:20:54 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/17 15:45:20 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	nbchar(int n)
{
	int i;
	int sign;

	sign = -1;
	i = 0;
	if (n == 0)
		return (1);
	if (n > 0)
	{
		sign = 1;
		n = (n * -1);
	}
	while (n < 0)
	{
		n = (n / 10);
		i++;
	}
	if (sign == 1)
		return (i);
	else
		return (i + 1);
}

char	*ft_itoa(int n)
{
	char *str;
	int nc;
	int nfinal;

	str = malloc(sizeof(*str) * (nbchar(n) + 1));
	nc = nbchar(n) - 1;
	nfinal = nbchar(n);
	if (!(str))
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		str[nc] = n % 10;
		n = n / 10;
		nc--;
	}
	str[nfinal] = '\0';
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:20:54 by balbuque          #+#    #+#             */
/*   Updated: 2021/02/23 19:41:31 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbchar(int n)
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

static	int		isedgecase(int n, char *str)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = str;
	if (n == -2147483648)
	{
		i = 0;
		str2 = "-2147483648";
		while (i <= 12)
		{
			str1[i] = str2[i];
			i++;
		}
		return (1);
	}
	else if (n == 0)
	{
		str1[0] = '0';
		str[1] = '\0';
	}
	return (0);
}

char			*ft_itoa(int n)
{
	char		*str;
	long long	nc;
	int			nfinal;

	str = malloc(sizeof(*str) * (nbchar(n) + 1));
	nc = nbchar(n) - 1;
	nfinal = nbchar(n);
	if (!(str))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (isedgecase(n, str) == 1)
		return (str);
	while (n != 0)
	{
		str[nc] = (n % 10) + '0';
		n = n / 10;
		nc--;
	}
	str[nfinal] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:25:23 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/23 19:18:44 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	char_converter(va_list args, t_flags *flags)
{
	char	c;
	int		w;
	int		m;

	c = va_arg(args, int);
	w = flags->width;
	m = flags->minus;
	if ((w != 0 ) && (m == 0))
	{
		while (w > 1)
		{
			ft_putchar_fd(' ',1);
			flags->counter += 1;
			w--;
		}
		ft_putchar_fd(c, 1);
		flags->counter += 1;
	}
	else if ((w != 0 ) && (m != 0))
	{
		ft_putchar_fd(c, 1);
		flags->counter += 1;
		while (w > 1)
		{
			ft_putchar_fd(' ',1);
			flags->counter += 1;
			w--;
		}
	}
	else
	{
		ft_putchar_fd(c, 1);
		flags->counter += 1;
	}

}

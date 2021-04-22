/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:55:34 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/22 18:59:21 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	converter(va_list args, t_flags *flags)
{
	if (flags->conversion == 'c')
		char_converter(args, flags);
}

t_flags	init_flags(t_flags flags)
{
	flags.zero = 0;
	flags.minus = 0;
	flags.width = 0;
	flags.precision = 0;
	flags.conversion = '0';
	flags.counter = 0;
	return (flags);
}

void	whatflags(char *str, va_list args, int i, t_flags *flags)
{
	i++;
	get_zero(i, str, flags);
	get_minus(i, str, flags);
	get_width(i, str, flags, args);
	get_precision(i, str, flags, args);
	get_conversion(i, str, flags, args);
	converter(args, flags);
}

int		read_string(char *str, va_list args)
{
	int i;
	t_flags flags;

	i = 0;
	init_flags(flags);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			whatflags(str, args, i, &flags);
		else
		{
			ft_putchar_fd(str[i], 1);
			flags.counter += 1;
		}	
		i++;
	}
	return(flags.counter);
}

int		ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);
	read_string((char *)str, args);
	va_end (args);
	return(0);
}

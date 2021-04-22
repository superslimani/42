/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:12:28 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/22 16:23:24 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_zero(int i, char *str, t_flags *flags)
{
	while (str[i] && str[i] == '0')
	{
		if (str[i] == '0')
			flags->zero = 1;
		i++;
	}
}
void	get_minus(int i, char *str, t_flags *flags)
{
	while (str[i] && str[i] == '-')
	{
		if (str[i] == '-')
			flags->minus = 1;
		i++;
	}
}
void	get_width(int i, char *str, t_flags *flags, va_list args)
{
	int w;

	w = 0;
	while (str[i] && ((str[i] == '*') || (str[i] >= '0' && str[i] <= '9')))
	{
		if (str[i] == '*')
		{
			flags->width = va_arg(args, int);
			break;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			w *= 10;
			w += (str[i] - '0');
		}
		i++;
	}
	if (w > 0)
		flags->width = w;
}
void	get_precision(int i, char *str, t_flags *flags, va_list args)
{
	int p;

	p = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (str[i + 1] == '*')
			{
				flags->precision = va_arg(args, int);
				break;
			}
			else if (str[i + 1] >= '0' && str[i + 1] <= '9')
			{
				p *= 10;
				p += (str[i + 1] - '0');
				i++;
			}
		}
		i++;
	}
	if (p > 0)
		flags->precision = p;
}
void	get_conversion(int i, char *str, t_flags *flags, va_list args)
{
	if (str[i] == 'c')
		flags->conversion = 'c';
	else if (str[i] == 's')
		flags->conversion = 's';
	else if (str[i] == 'p')
		flags->conversion = 'p';
	else if (str[i] == 'd')
		flags->conversion = 'd';
	else if (str[i] == 'i')
		flags->conversion = 'i';
	else if (str[i] == 'u')
		flags->conversion = 'u';
	else if (str[i] == 'x')
		flags->conversion = 'x';
	else if (str[i] == 'X')
		flags->conversion = 'X';
	else if (str[i] == '%')
		flags->conversion = '%';
}

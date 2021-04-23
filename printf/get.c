/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:12:28 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/23 19:14:07 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_zero(int *i, char *str, t_flags *flags)
{
	if (str[(*i)] == '0')
		flags->zero = 1;
}

void	get_minus(int *i, char *str, t_flags *flags)
{
	if (str[(*i)] == '-')
		flags->minus = 1;
}

void	get_width(int *i, char *str, t_flags *flags, va_list args)
{
	int w;

	w = 0;;
	while (str[(*i)] && ((str[(*i)] == '*') || (str[(*i)] >= '0' && str[(*i)] <= '9')))
	{
		if (str[(*i)] == '*')
			flags->width = va_arg(args, int);
		else if (str[(*i)] >= '0' && str[(*i)] <= '9')
		{
			w *= 10;
			w += (str[(*i)] - '0');
		}
		(*i)++;
	}
	if (w > 0)
		flags->width = w;
}

void	get_precision(int *i, char *str, t_flags *flags, va_list args)
{
	int p;

	p = 0;
	while ((str[(*i)] < 'a' && str[(*i)] > 'z') || (str[(*i)] < 'A' && str[(*i)] > 'Z'))
	{
		if (str[(*i)] == '.')
		{
			(*i) += 1;
			if (str[(*i)] == '*')
				flags->precision = va_arg(args, int);
			else if (str[(*i)] >= '0' && str[(*i)] <= '9')
			{
				p *= 10;
				p += (str[(*i)] - '0');
				(*i)++;
			}
		}
		(*i)++;
	}
	if (p > 0)
		flags->precision = p;
}

void	get_conversion(int *i, char *str, t_flags *flags, va_list args)
{
	if (str[(*i)] == 'c')
		flags->conversion = 'c';
	else if (str[(*i)] == 's')
		flags->conversion = 's';
	else if (str[(*i)] == 'p')
		flags->conversion = 'p';
	else if (str[(*i)] == 'd')
		flags->conversion = 'd';
	else if (str[(*i)] == 'i')
		flags->conversion = 'i';
	else if (str[(*i)] == 'u')
		flags->conversion = 'u';
	else if (str[(*i)] == 'x')
		flags->conversion = 'x';
	else if (str[(*i)] == 'X')
		flags->conversion = 'X';
	else if (str[(*i)] == '%')
		flags->conversion = '%';
}

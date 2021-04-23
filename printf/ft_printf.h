/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:42:22 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/23 18:16:38 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_flags
{
	int		zero;
	int		minus;
	int		width;
	int		precision;
	char	conversion;
	int		counter;
}				t_flags;

int		ft_printf(const char *str, ...);
int		read_string(char *str, va_list args);
void	whatflags(char *str, va_list args, int *i, t_flags *flags);
void	converter(va_list args, t_flags *flags);
t_flags	init_flags(t_flags flags);
void	get_zero(int *i, char *str, t_flags *flags);
void	get_minus(int *i, char *str, t_flags *flags);
void	get_width(int *i, char *str, t_flags *flags, va_list args);
void	get_precision(int *i, char *str, t_flags *flags, va_list args);
void	get_conversion(int *i, char *str, t_flags *flags, va_list args);
void	char_converter(va_list args, t_flags *flags);

#endif

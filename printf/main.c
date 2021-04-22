/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:18:56 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/22 18:59:18 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*void luis(char *fmt, ...)
           {
                   va_list ap, ap2;
                   int d;
                   char c, *s;

                   va_start(ap, fmt);
                   va_copy(ap2, ap);
                   while (*fmt)
                           switch(*fmt++) {
                           case 's':                        string 
                                   s = va_arg(ap, char *);
                                   printf("string %10.1s\n", s);
                                   break;
                           case 'd':                        int 
                                   d = va_arg(ap, int);
                                   printf("int %1.20d\n", d);
                                   break;
                           case 'c':                        char 	
                                    Note: char is promoted to int. 
                                   c = va_arg(ap, int);
                                   printf("char %c\n", c);
                                   break;
                           }
                   va_end(ap);
                    use ap2 to iterate over the arguments again 
                   va_end(ap2);
           }*/
int main()
{
	char c;

	c = 'b';
	printf("teste1 %c\n", 'b');
	printf("%c teste2\n",c);
	printf("teste %c 3\n", c);
	ft_printf("teste1 %c\n", 'b');
	ft_printf("%c teste2\n", c);
	ft_printf("teste %c 3\n", c);
	return (0);
}

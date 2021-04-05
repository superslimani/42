/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:18:56 by balbuque          #+#    #+#             */
/*   Updated: 2021/04/01 17:32:59 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void luis(char *fmt, ...)
           {
                   va_list ap, ap2;
                   int d;
                   char c, *s;

                   va_start(ap, fmt);
                   va_copy(ap2, ap);
                   while (*fmt)
                           switch(*fmt++) {
                           case 's':                       /* string */
                                   s = va_arg(ap, char *);
                                   printf("string %10.1s\n", s);
                                   break;
                           case 'd':                       /* int */
                                   d = va_arg(ap, int);
                                   printf("int %1.20d\n", d);
                                   break;
                           case 'c':                       /* char */
                                   /* Note: char is promoted to int. */
                                   c = va_arg(ap, int);
                                   printf("char %c\n", c);
                                   break;
                           }
                   va_end(ap);
                   /* use ap2 to iterate over the arguments again */
                   va_end(ap2);
           }
int main()
{
	luis("%s %c %d %c", "ola",'X',5455,'\n');
	luis("%d", 46453);
	return (0);
}

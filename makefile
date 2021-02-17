# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: balbuque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 16:59:53 by balbuque          #+#    #+#              #
#    Updated: 2021/02/17 17:06:02 by balbuque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_*.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(CC) -c $(CFLAGS) $(OBJS)
	ar -rc $(NAME) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

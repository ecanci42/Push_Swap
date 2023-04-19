# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 19:00:11 by ecanci            #+#    #+#              #
#    Updated: 2023/03/24 19:00:12 by ecanci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_printf_utils.c
OBJS	= $(SRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 11:52:24 by htomas-d          #+#    #+#              #
#    Updated: 2022/09/22 14:59:27 by htomas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(wildcard *.c)

OBJS		= $(SRCS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libft.a

.c.o:
		$(CC) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re

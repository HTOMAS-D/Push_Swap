NAME		= push_swap

SRCS		= $(wildcard srcs/*.c)

OBJS		= $(SRCS:%.c=%.o)

LIBFTA		= ./libft/libft.a

CC		= gcc# -Wall -Wextra -Werror -g -fsanitize=address

RM		= rm -f

.c.o:
			$(CC) -c $< -o $@

all:		$(NAME)

$(NAME):	$(LIBFTA) $(OBJS)
			$(CC) $(LIBFTA) $(OBJS) -o $(NAME)
			@echo "$(GREEN)Successfully built --> $(YELLOW)$(NAME)$(DEFAULT)"

$(LIBFTA):
			make -C libft

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			make -C libft fclean
			@echo "$(RED)Files Removed!$(DEFAULT)"

re:			fclean all

.PHONY:		all clean re fclean

god:
			git status
			git add .
			git status
			git commit -m "🔥Random Makefile Commit🔥"
			git status

#COLORS
GREEN = \033[1;32m
RED = \033[1;31m
DEFAULT = \033[0m
YELLOW = \033[1;33m

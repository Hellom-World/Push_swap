NAME	= push_swap

FLAGS	= -Wall -Wextra -Werror -g
CC	= cc $(FLAGS)

LIBFT	= libft/libft.a

SRCS	=	push_swap.c

OBJS	= $(SRCS:.c=.o)


%.o: %.c
	$(CC) -c $^

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	cd libft && $(MAKE)

clean:
	rm -f $(OBJS)

fclean: clean
	cd libft && $(MAKE) fclean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re


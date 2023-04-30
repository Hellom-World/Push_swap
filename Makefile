NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
SRC_DIR = srcs/

SRC	=	src/ft_add_back.c \
		src/ft_check_ordem.c \
		src/ft_error_message.c \
		src/ft_free.c \
		src/ft_isdup.c \
		src/ft_new_stack.c \
		src/nodes_fts.c \
		src/push_swap.c \
		src/triagem.c \

OBJ = ${SRC:.c=.o}

${NAME}:	${OBJ}
		make -C $(LIBFTDIR)
		${CC} ${FLAGS} ${OBJ} -o ${NAME} -L./libft -lft

all:	${NAME}


clean:	
		${RM} *.o
		cd libft/ && $(MAKE) clean
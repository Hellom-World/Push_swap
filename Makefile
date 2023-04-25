SRCS			=	ft_atoi.c ft_strlen.c ft_memcpy.c ft_isalpha.c \
				ft_isdigit.c ft_isalnum.c ft_isascii.c ft_memset.c \
				ft_bzero.c ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			       	ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c \
				ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_putchar_fd.c ft_striteri.c ft_putstr_fd.c \
				ft_putnbr_fd.c ft_putendl_fd.c

SRCS_BONUS 		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c
OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(SRCS_BONUS:.c=.o)
CC			= cc
CFLAGS			= -Wall -Wextra -Werror
LIBCR			= ar rc
RM			= rm -f

NAME			= libft.a

all:			libft.a

libft.a:	$(SRCS:.c=.o)
			ar rc $(NAME) *.o

bonus:		$(SRCS:.c=.o) $(SRCS_BONUS:.c=.o)
			ar rc $(NAME) *.o

clean:
			rm -f $(SRCS:.c=.o) $(SRCS_BONUS:.c=.o)
fclean:			clean
			rm -f $(NAME)

re:			fclean all

so:	
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
			gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)

CFLAGS = -Wall -Wextra -Werror -I.
# -Wall (enable all compiler warnings), -Wextra (enable extra compiler warnings), -Werror (treat warnings as errors), and -I. (include the current directory).

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c 

OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
	@echo "Removing old outputs..."
	$(RM) $(OBJS)

fclean:
	@echo "Removing old outputs and libraries..."
	$(RM) $(OBJS) $(NAME)

re: fclean all
	

.PHONY:	all clean fclean re
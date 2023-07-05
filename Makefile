CFLAGS = -Wall -Wextra -Werror -I.
# -Wall (enable all compiler warnings), -Wextra (enable extra compiler warnings), -Werror (treat warnings as errors), and -I. (include the current directory).

SRCS = ft_isprint.c

OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)

clean:
	@echo "Removing old outputs..."
	@$(RM) $(OBJS)

fclean:
	@echo "Removing old outputs and libraries..."
	@$(RM) $(OBJS) $(NAME)


.PHONY:	all clean fclean
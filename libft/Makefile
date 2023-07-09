# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/08 16:19:59 by mel-ayou          #+#    #+#              #
#    Updated: 2023/07/08 18:08:43 by mel-ayou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I.
# -Wall (enable all compiler warnings), -Wextra (enable extra compiler warnings), -Werror (treat warnings as errors), and -I. (include the current directory).

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c  ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
		

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/08 16:19:59 by mel-ayou          #+#    #+#              #
#    Updated: 2023/08/18 20:50:25 by mel-ayou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c  ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
		
BRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstiter.c ft_lstadd_back.c ft_lstclear.c \
		ft_lstdelone.c ft_lstlast.c ft_lstmap.c

		
OBJS = $(SRCS:.c=.o)
OBJSB = $(BRCS:.c=.o)
CC = gcc
RM = rm -f
NAME = libft.a

all: $(NAME) bonus

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
	@echo "Removing old outputs..."
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	@echo "Removing old outputs and libraries..."
	$(RM) $(NAME)

bonus: $(OBJSB) $(OBJS)
	@echo "Compiling bonus"
	ar rcs $(NAME) $(OBJSB) $(OBJS)
			
re: fclean all
	
.PHONY:	all clean fclean re bonus
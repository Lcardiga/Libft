# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:21:58 by lcardiga          #+#    #+#              #
#   Updated: 2021/11/11 21:30:35 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRC_B =  ft_lstnew.c \

OBJ 		= $(SRC:.c=.o)

BONUS_OBJ 	= $(SRC_B:.c=.o)

HEADER		= libft.h

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I $(HEADER)

all: $(NAME)

$(NAME): $(HEADER) $(OBJ)
		ar rcs $(NAME) $(OBJ)

bonus:
		make OBJ="$(BONUS_OBJ)" all

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:	fclean all

.PHONY : all clean fclean re bonus
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:33:17 by rode-alb          #+#    #+#              #
#    Updated: 2022/10/31 17:00:58 by rode-alb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

FILES = ft_isascii.c ft_isprint.c ft_strlcat.c ft_bzero.c ft_atoi ft_isalnum ft_isalpha.c \
		ft_isdigit.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd



OBJS = $(FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean: 
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)
re: fclean $(NAME)
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:33:17 by rode-alb          #+#    #+#              #
#    Updated: 2022/11/09 18:47:37 by rode-alb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

FILES = ft_isascii.c ft_isprint.c ft_strlcat.c ft_bzero.c ft_atoi.c ft_isalnum.c ft_isalpha.c \
		ft_isdigit.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(FILES:.c=.o)
OBJS_BONUS = $(FILES_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		$(MSG1)

bonus: $(OBJS) $(OBJS_BONUS)
		@ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
		$(MSG1)

clean: 
		rm -f $(OBJS) $(OBJS_BONUS)
		$(MSG2)
fclean: clean
		rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all, clean, fclean, re, bonus
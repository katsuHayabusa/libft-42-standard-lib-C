# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saichaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 17:51:07 by saichaou          #+#    #+#              #
#    Updated: 2022/11/17 12:33:36 by saichaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

FILES_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

FILES_OBJS = $(FILES_SOURCES:.c=.o)

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(FILES_OBJS)
	ar -rcs $(NAME) $(FILES_OBJS)

fclean :
	$(RM) $(NAME)

re : fclean all

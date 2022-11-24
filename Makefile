# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saichaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 17:51:07 by saichaou          #+#    #+#              #
#    Updated: 2022/11/24 14:20:24 by saichaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

FILES_SOURCES = $(wildcard ft*.c)

FILES_OBJS = $(FILES_SOURCES:.c=.o)

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(FILES_OBJS)
	ar -rcs $(NAME) $(FILES_OBJS)

fclean :
	$(RM) $(NAME) $(FILES_OBJS)

clean :
	$(RM) $(FILES_OBJS)

re : fclean all

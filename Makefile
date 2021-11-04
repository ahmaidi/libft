# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 12:49:36 by ahmaidi           #+#    #+#              #
#    Updated: 2021/11/04 12:53:32 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.ahmaidi

FLAG = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.Created

OBJ = $(SRCS:.c=.o)

all:
$(NAME)
	gcc $(FLAG) $(SRC) -c
	ar 
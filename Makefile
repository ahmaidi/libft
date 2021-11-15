# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 20:12:24 by ahmaidi           #+#    #+#              #
#    Updated: 2021/11/15 22:44:50 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_isdigit.c ft_memset.c ft_isprint.c ft_strmapi.c  ft_putnbr_fd.c\
		ft_strlcat.c ft_atoi.c ft_substr.c ft_strchr.c ft_itoa.c ft_split.c ft_striteri.c\
		ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_strrchr.c ft_strjoin.c\
		ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_putendl_fd.c\
		ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strtrim.c


OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(CFLAGS) $(SRCS) -c
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


all: $(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

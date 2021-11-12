CC=cc
NAME=libft.a
FLAGS=-Wall -Werror -Wextra -c
C_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
BONUS = ft_lstnew.c
O_FILES = $(C_FILES:.c=.o)
B = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): OBJ
	ar rc $(NAME) $(O_FILES)

OBJ:
	$(CC) $(FLAGS) $(C_FILES)

bonus:
	gcc $(BONUS) -c $(FLAGS)
	ar rc $(NAME) $(B)

re: fclean all

fclean: clean
	rm -f $(NAME)
clean:
	rm -f $(O_FILES)

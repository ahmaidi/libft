CC=cc
NAME=libft.a
FLAGS=-Wall -Werror -Wextra -c
C_FILES=$(wildcard *.c)
O_FILES=*.o

all: $(NAME)

$(NAME): OBJ
	ar rcs $(NAME) $(O_FILES)

OBJ:
	$(CC) $(FLAGS) $(C_FILES)

re: fclean all

fclean: clean
	rm -f $(NAME)
clean:
	rm -f $(O_FILES)

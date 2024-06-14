CC = gcc

NAME = Colleen

CFLAGS = -Wall -Werror -Wextra
SRC = Colleen.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

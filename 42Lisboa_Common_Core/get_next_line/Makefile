NAME = get_next_line

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = get_next_line.c get_next_line_utils.c .main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) get_next_line.h
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) && \
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) .text.txt 

c:
	$(RM) $(OBJ) && clear

f: c
	$(RM) $(NAME) && clear

re: fclean all

.PHONY: all clean fclean re
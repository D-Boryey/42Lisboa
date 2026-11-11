NAME = get_next_line

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = get_next_line
NAME_BONUS = get_next_line_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = get_next_line.c get_next_line_utils.c .main.c
SRC_BONUS = get_next_line_bonus.c get_next_line_utils_bonus.c .main_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(SRC) get_next_line.h
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) && \
	valgrind -s --leak-check=full --show-leak-kinds=all ./$(NAME) \
	.text.txt 

bonus: $(SRC_BONUS) get_next_line_bonus.h
	$(CC) $(CFLAGS) $(SRC_BONUS) -o get_next_line_bonus && \
	valgrind -s --leak-check=full --show-leak-kinds=all ./$(NAME_BONUS) \
	.text1.txt .text2.txt .text3.txt 

c:
	$(RM) $(OBJ) $(OBJ_BONUS) && clear

f: c
	$(RM) $(NAME) $(NAME_BONUS) && clear

re: fclean all

.PHONY: all clean fclean re bonus
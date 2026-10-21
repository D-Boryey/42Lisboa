SRC_DIR := srcs
INC_DIR := includes
OBJ_DIR := obj

NAME := libft.a
SRC := srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c
OBJ := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
INC :=

CPPFLAGS := -I$(INC_DIR)
CFLAGS   := -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC) | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	@$(RM) -rv $(OBJ_DIR)

fclean: clean
	@$(RM) -v $(NAME)

re: fclean all
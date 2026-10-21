SRC_DIR := srcs
INC_DIR := includes
OBJ_DIR := obj

EXE := ft_display_file
SRC := srcs/main.c
OBJ := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
INC :=

CPPFLAGS := -I$(INC_DIR)
CFLAGS   := -Wall -Wextra -Werror

.PHONY: all clean fclean

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC) | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	@$(RM) -rv $(OBJ_DIR)

fclean: clean
	@$(RM) -v $(EXE)
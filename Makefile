CC = gcc
CFLAGS = -Wall -Wextra -Werror $(ALL_INC)

AR = ar rcs

TARGET = libft.a

SRC_DIR = src
OBJ_DIR = obj

ALL_PATHS = checks conversions gnl linked_list memory misc print strings

SRC = $(wildcard $(SRC_DIR)/**/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
ALL_INC = $(addprefix -I, includes $(wildcard libs/*/includes))

all: dir $(TARGET)

dir:
	@mkdir -p obj; (cd obj; mkdir -p $(ALL_PATHS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[92m•\033[0m\c"

$(TARGET): $(OBJ)
	@ar rsc $(TARGET) $(OBJ)
	@echo "\n\033[92mLibft successfully compiled!\033[0m"

clean:
	@rm -rf obj

fclean: clean
	@$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re

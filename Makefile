CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
AR = ar rcs

TARGET = libft.a

SRC_DIR = src
OBJ_DIR = obj


PATH_checks = checks
PATH_conversions = conversions
PATH_gnl = gnl
PATH_linked_list = linked_list
PATH_memory = memory
PATH_misc = misc
PATH_print = print
PATH_strings = strings
# PATH_ft_printf = src/ft_printf

ALL_PATHS = $(PATH_checks) $(PATH_conversions) $(PATH_gnl) $(PATH_linked_list) $(PATH_memory) $(PATH_misc) $(PATH_print) $(PATH_strings)

SRC = $(wildcard $(SRC_DIR)/**/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

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
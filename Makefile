# https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b
NAME = app

LIB_NAME = libft
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
OBJ_DIR = obj

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TMP = $(patsubst %.c, %.o, $(SRC_FILES))
OBJ_FILES = $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(TMP))

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -I${INCLUDE_DIR} 
# When compiling on linux
# CFLAGS = -Wall -Werror -Wextra -g -I${INCLUDE_DIR} -DLIBBSD_OVERLAY -I/usr/include/bsd

all: $(NAME)
	@echo
	@echo
	@echo
	@./$(BUILD_DIR)/$(NAME)


$(NAME): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(BUILD_DIR)/$(NAME)
	# When compiling on linux
	# $(CC) $(OBJ_FILES) -lbsd -o $(BUILD_DIR)/$(NAME)

# Because every single object file depends on its corresponding c file
# It will rebuild only the one object file instead of all object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm  -f $(BUILD_DIR)/$(NAME)

re: fclean all

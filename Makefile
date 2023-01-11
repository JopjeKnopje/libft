# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jboeve <jboeve@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/17 12:05:02 by jboeve        #+#    #+#                  #
#    Updated: 2023/01/11 12:44:22 by jboeve        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
INC_FLAGS = -Iinclude

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
OUT_DIR = build


HEADERS = libft.h

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

BONUS_SRCS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
OBJS = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))
HEADERS := $(addprefix $(INC_DIR)/, $(HEADERS))
NAME := $(addprefix $(OUT_DIR)/, $(NAME))

BONUS_SRCS := $(addprefix $(SRC_DIR)/, $(BONUS_SRCS))
BONUS_OBJS = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(BONUS_SRCS))

ifdef WITH_BONUS
	OBJ_RAW = $(OBJS) $(BONUS_OBJS)
else
	OBJ_RAW = $(OBJS)
endif

all: $(NAME)

$(NAME): $(OBJ_RAW) $(HEADERS)
	@mkdir -p $(OUT_DIR)
	ar rcs $(NAME) $(OBJ_RAW)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC_FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(OUT_DIR)

re: fclean all

bonus:
	@$(MAKE) WITH_BONUS=true all

$(OBJ_DIR)/%.o: $(BONUS_SRCS)/%.c
	$(CC) $(CFLAGS) $(INC_FLAGS) -c -o $@ $<

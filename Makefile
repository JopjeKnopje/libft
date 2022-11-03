# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jboeve <jboeve@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/17 12:05:02 by jboeve        #+#    #+#                  #
#    Updated: 2022/11/03 09:35:32 by joppe         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_calloc.o \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isascii.o \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memchr.o \
		ft_memcmp.c \
		ft_memcmp.o \
		ft_memcpy.c \
		ft_memcpy.o \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putchar_fd.o \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strchr.o \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcat.o \
		ft_strlcpy.c \
		ft_strlcpy.o \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strncmp.o \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strrchr.o \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)
	
$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRCS)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

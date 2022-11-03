# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jboeve <jboeve@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/17 12:05:02 by jboeve        #+#    #+#                  #
#    Updated: 2022/11/03 18:05:44 by joppe         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

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
		ft_lstsize.c
		# ft_lstlast.c \
		# ft_lstadd_back.c \
		# ft_lstdelone.c \
		# ft_lstclear.c \
		# ft_lstiter.c \
		# ft_lstmap.c

OBJS = $(patsubst %.c, %.o, $(SRCS))
BONUS_OBJS = $(patsubst %.c, %.o, $(BONUS_SRCS))

all: $(NAME)

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o: $(SRCS)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

%.o: $(BONUS_SRCS)%.c
	$(CC) $(CFLAGS) -c -o $@ $<


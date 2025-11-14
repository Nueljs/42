NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRC = ft_bzero.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
	ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
OBJ = $(SRC:.c=.o)

AR := ar rcs
RM := rm -f
.PHONY: all clean fclean re

all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all


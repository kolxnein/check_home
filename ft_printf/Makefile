NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		ft_printf_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o *.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
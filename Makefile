NAME	   = libftprintf.a
CC		   = gcc
CFLAGS	   = -Wall -Werror -Wextra
RM		   = rm -f
SRC		   = ft_printf.c ft_puthex.c \
			 ft_putchar.c ft_putstr.c \
			 ft_putnbr.c ft_putunbr.c \
			 ft_putptr.c
OBJ		   = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	ar -rcs $@ $^
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 

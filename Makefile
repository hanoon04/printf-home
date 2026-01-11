NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
       ft_printf_char.c \
       ft_printf_str.c \
       ft_printf_int.c \
       ft_printf_uint.c \
       ft_printf_hex.c \
       ft_printf_ptr.c \
       ft_printf.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

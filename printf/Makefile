NAME = printf.a

SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

GCC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(GCC) $(CLAGS)-c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean

.PHONY: all clean fclean re

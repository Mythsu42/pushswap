NAME = push_swap

SRCS = $(wildcard src/*.c src/instruction/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)

LIBFT = libft/libft.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCLUDES = -Iincludes -Ilibft

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C libft

obj/%.o: src/%.c
	@mkdir -p obj
	$(GCC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

clean:
	$(RM) -r obj
	$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re

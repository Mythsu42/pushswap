NAME = push_swap

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)

LIBFT = libft/libft.a
PRINTF = printf/printf.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCLUDES = -Iincludes -Ilibft -Iprintf

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(PRINTF):
	$(MAKE) -C printf

obj/%.o: src/%.c
	@mkdir -p obj
	$(GCC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(PRINTF)

clean:
	$(RM) -r obj
	$(MAKE) -C libft clean
	$(MAKE) -C printf clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C printf fclean

re: fclean all

.PHONY: all clean fclean re

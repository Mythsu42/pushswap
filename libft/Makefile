NAME = libft.a

SRCS = $(wildcard *.c)
OBJS = ${SRCS:%.c=%.o}

GCC 	= gcc
RM 	= rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.

%.o: %.c
	 ${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

${NAME}: ${OBJS} libft.h
	 ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	 ${RM} ${OBJS}

fclean: clean
	 ${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re

SRCS		=	main.c \
				tests/term_handle.c \
				tests/test_memset.c \
				tests/test_memcpy.c	\
				tests/test_bzero.c \
				tests/test_memccpy.c \
				tests/test_memmove.c \
				tests/test_isalpha.c \
				tests/test_isalnum.c \
				tests/test_isascii.c \
				tests/test_isprint.c \
				tests/test_tolower.c \
				tests/test_memchr.c

OBJS		=	${SRCS:.c=.o}
INCLUDES	=	includes
LIBFT_PATH	=	../libft/
LIBFT		= 	libft.a
NAME		=	libft_tests
CC			=	gcc
RM 			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

all:		${NAME}
	
${NAME}:	${lIBFT} ${OBJS} ${INCLUDES}
			make -C ${LIBFT_PATH}
			${CC} ${CFLAGS} ${OBJS} ${LIBFT_PATH}${LIBFT} -o ${NAME}
.c.o:
			${CC} ${CFLAGS} -I${INCLUDES} -I${LIBFT_PATH} -c $< -o ${<:.c=.o}
clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME} ${LIBFT_PATH}${LIBFT}


re:			fclean all

.PHONY:		all clean fclean re

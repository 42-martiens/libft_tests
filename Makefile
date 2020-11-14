SRCS		=	main.c \
				mains/test_memset.c
OBJS		=	${SRCS:.c=.o}
INCLUDES	=	includes
LIBFT_PATH	=	./libft/
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

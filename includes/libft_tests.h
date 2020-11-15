#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include "libft.h"
# include <string.h>
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include <setjmp.h>
# include <stdio.h>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[1;34m"
# define DEFAULT	"\033[0m"

jmp_buf reset;

void	term_handle(int sig);
int		test_memset(void);
int		test_memcpy(void);
int		test_bzero(void);
int		test_memccpy(void);
int		test_memmove(void);
int		test_memchr(void);
int		test_isalpha(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_tolower(void);

#endif
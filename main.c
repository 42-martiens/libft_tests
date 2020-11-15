#include "libft_tests.h"
#include <stdio.h>

int		main()
{
	printf(BLUE);
	printf("WELCOME IN THE LIBFT_TESTS\nWritten by ndemont and nboisde, enjoy the defense.\n");

	sleep(1);
	printf("\n%s\n", "TEST FOR MEMSET");
	printf(DEFAULT);
	test_memset();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR BZERO");
	printf(DEFAULT);
	test_bzero();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCPY");
	printf(DEFAULT);
	test_memcpy();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCCPY");
	printf(DEFAULT);
	test_memccpy();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMMOVE");
	printf(DEFAULT);
	test_memmove();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCHR");
	printf(DEFAULT);
	test_memchr();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR STRLEN");
	printf(DEFAULT);
	test_strlen();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR ISALPHA");
	printf(DEFAULT);
	test_isalpha();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR ISALNUM");
	printf(DEFAULT);
	test_isalnum();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR ISASCII");
	printf(DEFAULT);
	test_isascii();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR ISPRINT");
	printf(DEFAULT);
	test_isprint();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR TOLOWER");
	printf(DEFAULT);
	test_tolower();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR STRRCHR");
	printf(DEFAULT);
	test_strrchr();
	printf("\n");

	return (0);
}

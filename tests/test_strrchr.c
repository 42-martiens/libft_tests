#include "libft_tests.h"

int		test_strrchr()
{
	char empty[1] = "\0";
	char *str = "Hello je fais un test\0";

	char *test1 = strrchr(empty, 'c');
	char *ft_test1 = ft_strrchr(empty, 'c');
	if (test1 != ft_test1)
		printf("%s%s%s", RED, "[KO] : Your strrchr does not work with an empty string\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	char *test2 = strrchr(empty, '\0');
	char *ft_test2 = ft_strrchr(empty, '\0');
	if (test2 != ft_test2)
		printf("%s%s%s", RED, "[KO] : Your strrchr does not work with an empty string and a '\0' char", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	char *test3 = strrchr(str, '\0');
	char *ft_test3 = ft_strrchr(str, '\0');
	if (test3 != ft_test3)
		printf("%s%s%s", RED, "[KO] : Your strrchr does not work with a '\0' char", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	char *test4 = strrchr(str, 'o');
	char *ft_test4 = ft_strrchr(str, 'o');
	if (test4 != ft_test4)
		printf("%s%s%s", RED, "[KO] : Your strrchr does not work with basic inputs", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	char *test5 = strrchr(str, 't');
	char *ft_test5 = ft_strrchr(str, 't');
	if (test5 != ft_test5)
		printf("%s%s%s", RED, "[KO] : Your strrchr does not work with basic inputs", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	char *test6 = strrchr(str, 'z');
	char *ft_test6 = ft_strrchr(str, 'z');
	if (test6 != ft_test6)
		printf("%s%s%s", RED, "[KO] : Your strrchr does not work with a non present char", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	//if (strcmp(strrchr(0, 'c'), ft_strrchr(0, 'c')))
	//	printf("%s%s%s", RED, "[KO] : Your strrchr does not work with a NULL string", DEFAULT);
	//else
	//	printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	return (1);
}
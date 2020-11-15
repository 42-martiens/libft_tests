#include "libft_tests.h"

int		test_bzero_catch_sigbus()
{
	char *s1 = "\0";

	if (setjmp(reset) != 0)
	{
		printf(GREEN);
		printf("[OK] (Bus Error)\n");
		printf(DEFAULT);
		return(1);
	}
	signal(SIGBUS, term_handle);
	ft_bzero(s1, 3);
	printf(RED);
	printf("[KO] : ft_bzero does not bus error for a non modifiable argument\n");
	printf(DEFAULT);
	return (0);
}

int		test_bzero_catch_segv()
{
	char *ptr;

	ptr = 0;
	if (setjmp(reset) != 0)
	{
		printf(GREEN);
		printf("[OK] (Segmentation fault)\n");
		printf(DEFAULT);
		return (1);
	}
	signal(SIGSEGV, term_handle);
	ft_bzero(ptr, 2);
	printf(RED);
	printf("[KO] : Your bzero does not segmentation fault for a null argument\n");
	printf(DEFAULT);
	return (0);
}

int		test_bzero()
{
	char	s1[3] = "333";
	char	ft_s1[3] = "333";
	char	*s1cmp;
	char	*ft_s1cmp;
	int		i;

	test_bzero_catch_segv();
	test_bzero_catch_sigbus();
	s1cmp = malloc(4 * sizeof(char));
	ft_s1cmp = malloc(4 * sizeof(char));
	if (!s1cmp || !ft_s1cmp)
	{
		printf(RED);
		printf("Our malloc makes test crash\n");
		printf(DEFAULT);
		return (1);
	}
	bzero(s1, 3);
	ft_bzero(ft_s1, 3);
	i = 0;
	while (i < 3)
	{
		s1cmp[i] = (char)s1[i] + 48;
		i++;
	}
	s1cmp[i] = '\0';
	i = 0;
	while (i < 3)
	{
		ft_s1cmp[i] = (char)ft_s1[i] + 48;
		i++;
	}
	ft_s1cmp[i] = '\0';
	if (!strcmp(ft_s1cmp, s1cmp))
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	else
	{
		printf(RED);
		printf("[KO] : for basics tests (see /mains/test_bzero.c)\n");
		printf(DEFAULT);
	}
	free(ft_s1cmp);
	free(s1cmp);
	return (1);
}

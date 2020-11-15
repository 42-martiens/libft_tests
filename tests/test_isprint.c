#include "libft_tests.h"

int		test_isprint()
{
	char *str = "\0\n\31 <~\127";
	int i;

	i = 0;
	while (i < 7)
	{
		if (isprint(str[i]) != ft_isprint(str[i]))
		{
			printf(RED);
			printf("[K0] : ");
			if (str[i] == 0)
				printf("Your isprint does not work for c = \\0\n");
			else if (str[i] < 32 || str[i] == 127)
				printf("Your isprint does not work for non printable characters\n");
			else if (str[i] > 127)
				printf("Your isprint does not work for extended ASCII characters\n");
			printf(DEFAULT);
		}
		else if (i % 2)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		i++;
	}
	return (0);
}
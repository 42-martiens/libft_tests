#include "libft_tests.h"

int		test_isalnum()
{
	char *str = "\0\n@AZ09/:[`az{~\265";
	int i;

	i = 0;
	while (i < 16)
	{
		if (isalnum(str[i]) != ft_isalnum(str[i]))
		{
			printf(RED);
			printf("[K0] : ");
			if (str[i] == 0)
				printf("Your isalnum does not work for c = \\0\n");
			else if (str[i] < 32 || str[i] == 127)
				printf("Your isalnum does not work for non printable characters\n");
			else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
				printf("Your isalnum does not work for alpha characters\n");
			else if (str[i] >= '0' && str[i] <= '9')
				printf("Your isalnum does not work for numeric characters\n");
			else if (str[i] > 127)
				printf("Your isalnum does not work for extended ASCII characters\n");
			printf(DEFAULT);
		}
		else if (i % 2)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		i++;
	}
	return (0);
}